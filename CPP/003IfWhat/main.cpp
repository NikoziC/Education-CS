#include <iostream>
#include <limits> // ��� numeric_limits
#include <algorithm> // ��� std::transform
#include <cctype>    // ��� ::tolower

int main()
{
    std::string answer;

    std::cout << "Welcome to the Richard's cave!\n";
    std::cout << "Do you have a gift for our Lord?\n";

    while (true)
    {
        std::cout << "y/n? ";
        std::cin >> answer;

        // ��������� ����� �� ������� ��������
        if (answer.empty()) {
            std::cout << "WHAT DO YOU MEAN???\n";
            continue;
        }

        // ����������� ����� � ������� ��������
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
            std::cin.clear(); // ������� ����� ������
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ����� �����
        }
    }
    return 0;
}