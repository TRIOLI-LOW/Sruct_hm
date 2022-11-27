
#include <iostream>
struct bd {

	std::string con;
	std::string town;
	std::string street;
	int house;
	int home;
	int index;
};
void print_bd(bd& print) {
	std::cout << "Страна:\t" << print.con << "\nГород:\t" << print.town << "\nУлица:\t" 
		<< print.street << "\nНомер дома:\t" << print.house<< "\nНомер квартиры:\t"
		<< print.home << "\nИндекс:\t" << print.index << std::endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	bd first;
	first.con = "Russia";
	first.town = "Moskow";
	first.street = "Lenina";
	first.house = 13;
	first.home = 2;
	first.index = 134902;
	bd second;
	second.con = "Russia";
	second.town = "Rostov";
	second.street = "Novaya";
	second.house = 56;
	second.home = 15;
	second.index = 909435;
	print_bd(first);
	std::cout << std::endl;
	print_bd(second);
}

