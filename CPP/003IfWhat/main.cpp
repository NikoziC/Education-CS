#include <iostream>
#include <limits> // для numeric_limits
#include <algorithm> // для std::transform
#include <cctype>    // для ::tolower

int main()
{
    std::string answer;

    std::cout << "Welcome to the Richard's cave!\n";
    std::cout << "Do you have a gift for our Lord?\n";

    while (true)
    {
        std::cout << "y/n? ";
        std::cin >> answer;

        // Проверяем ответ на наличие символов
        if (answer.empty()) {
            std::cout << "WHAT DO YOU MEAN???\n";
            continue;
        }

        // Преобразуем ответ к нижнему регистру
        std::string lower_answer = answer;
        std::transform(lower_answer.begin(), lower_answer.end(), lower_answer.begin(), ::tolower);

        if (lower_answer == "y" || lower_answer == "yes" || lower_answer == "yep" || lower_answer == "yeah") {
            std::cout << "Hoho, My Darling, you're pretty smart.\n";
            break;
        }
        else if (lower_answer == "n" || lower_answer == "no" || lower_answer == "nah" || lower_answer == "nope") {
            std::cout << "~YOU ARE DEAD.~\n";
            break;
        }
        else {
            std::cout << "WHAT DO YOU MEAN???\n";
            std::cin.clear(); // Очищаем флаги ошибок
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода
        }
    }
    return 0;
}