

#include <iostream>
#include <string>
#include <Windows.h>


int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::string text;
	std::cout << "Введите слово : " << std::endl;
	std::getline(std::cin, text);
	std::cout << "Вы ввели : " << std::endl << text << std::endl;

	return 0;
}


