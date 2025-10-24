#include<iostream>

int main() //Обязательная функция в CPP, с которой начинается выполнение программы.
{
	char answer;
	std::cout << "Welcome to the Richard's cave!\n";
	std::cout << "Do you have a gift for our Lord?\n";
	std::cout << "y/n? ";
	std::cin >> answer;
	return 0;
}