#include <iostream>

enum class month {
    Jan = 1,
    Feb ,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sen,
    Oct,
    Nov,
    Dec
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int pass(0);
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> pass;
        
            switch (pass) {
            case static_cast<int>(month::Jan): std::cout << "Январь" << std::endl;
                break;
            case static_cast<int>(month::Feb): std::cout << "Февраль" << std::endl;
                break;
            case static_cast<int>(month::Mar): std::cout << "Март" << std::endl;
                break;
            case static_cast<int>(month::Apr): std::cout << "Апрель" << std::endl;
                break;
            case static_cast<int>(month::May): std::cout << "Май" << std::endl;
                break;
            case static_cast<int>(month::Jun): std::cout << "Июнь" << std::endl;
                break;
            case static_cast<int>(month::Jul): std::cout << "Июль" << std::endl;
                break;
            case static_cast<int>(month::Aug): std::cout << "Август" << std::endl;
                break;
            case static_cast<int>(month::Sen): std::cout << "Сентябрь" << std::endl;
                break;
            case static_cast<int>(month::Oct): std::cout << "Октябрь" << std::endl;
                break;
            case static_cast<int>(month::Nov): std::cout << "Ноябрь" << std::endl;
                break;
            case static_cast<int>(month::Dec): std::cout << "Декабрь" << std::endl;
                break;
            case 0: std::cout << "До свидания!";
                break;
            default: std::cout << "Некорректный ввод " << std::endl;
                break;
            }
    } while (pass != 0);
   
           
    
}