#include <iostream> // Подключаем стандартную библиотеку CPP Ввод-вывод. 


int main() // Обязательная функция в CPP, с которой начинается выполнение программы.
{
	std::string answer; // Задаем переменную, которая будет хранить ответ пользователя.
	
	std::cout << "Welcome to the Richard's cave!\n"; // Выводим приветственные сообщения в консоль через функцию cout из std.
	std::cout << "Do you have a gift for our Lord?\n";
	
	while (true)
	{
		std::cout << "y/n? ";
		std::cin >> answer; // Ожидаем ответа от пользователя и принимаем его значения в переменную answer, при помощи функции cin из std.
		
		if (answer == "y" || answer == "Y") {
			std::cout << "Hoho, My Darling, you're pretty smart.\n";
			break;
		}
		else if (answer == "n" || answer == "N") {
			std::cout << "~YOU ARE DEAD.~\n";
			break;
		}
		else {
			std::cout << "WHAT DO YOU MEAN???\n";
			std::cin.clear();
		}

	}

	return 0;
}