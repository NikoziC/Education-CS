#include <iostream> // ���������� ����������� ���������� CPP ����-�����. 


int main() // ������������ ������� � CPP, � ������� ���������� ���������� ���������.
{
	std::string answer; // ������ ����������, ������� ����� ������� ����� ������������.
	
	std::cout << "Welcome to the Richard's cave!\n"; // ������� �������������� ��������� � ������� ����� ������� cout �� std.
	std::cout << "Do you have a gift for our Lord?\n";
	
	while (true)
	{
		std::cout << "y/n? ";
		std::cin >> answer; // ������� ������ �� ������������ � ��������� ��� �������� � ���������� answer, ��� ������ ������� cin �� std.
		
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