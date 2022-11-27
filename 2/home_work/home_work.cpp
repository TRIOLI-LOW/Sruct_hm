
#include <iostream>
struct check {
	std::string name;
	int num;
	double bal;
};
void rebal(check* ch){
	std::cout << "Введите новый баланс: ";
	std::cin >> ch->bal;

}
int main()
{
	setlocale(LC_ALL, "Russian");
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

