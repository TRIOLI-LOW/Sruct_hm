
#include <iostream>
#include <Windows.h>

struct check {
	
	std::string name = "";
	int num = 0;
	double bal = 0;
};
void rebal(check* ch){
	std::cout << "Введите новый баланс: ";
	std::cin >> ch->bal;

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	check ch;
	std::cout << "Введите номер счета: ";
	std::cin >> ch.num;
	std::cout << "Введите имя: ";
	std::cin >> ch.name;
	std::cout << "Введите баланс: ";
	std::cin >> ch.bal;
	rebal(&ch);

	std::cout << "Ваш счет: " << ch.name << ", " << ch.num << ", " << ch.bal;

}

