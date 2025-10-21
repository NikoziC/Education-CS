#include <iostream>
#include<string>
int main()
{
	std::string login;
	std::cout << "Enter your name: ";
	std::getline(std::cin, login);
	std::cout << "Hello " << login << "!\n";
	return 0;
}