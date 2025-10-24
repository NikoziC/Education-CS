#include <iostream>
#include <vector>
#include <algorithm>

bool isAnswerInList(const std::string& answer, const std::vector<std::string>& validAnswers) {
    return std::find(validAnswers.begin(), validAnswers.end(), answer) != validAnswers.end();
}

int main() {
    const std::vector<std::string> positiveAnswers = { "y", "yes", "yep", "yeah" };
    const std::vector<std::string> negativeAnswers = { "n", "no", "nah", "nope" };

    std::string answer;

    std::cout << "Welcome to the Richard's cave!\nDo you have a gift for our Lord?\n";

    while (true) {
        std::cout << "y/n? ";
        std::getline(std::cin, answer);

        // Преобразование к нижнему регистру
        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        if (isAnswerInList(answer, positiveAnswers)) {
            std::cout << "Hoho, My Darling, you're pretty smart.\n";
            break;
        }
        else if (isAnswerInList(answer, negativeAnswers)) {
            std::cout << "~YOU ARE DEAD.~\n";
            break;
        }
        else {
            std::cout << "WHAT DO YOU MEAN???\n";
        }
    }

    return 0;
}