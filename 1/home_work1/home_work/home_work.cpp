#include <iostream>

enum month {
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
            case Jan: std::cout << "Январь" << std::endl;
                break;
            case Feb: std::cout << "Февраль" << std::endl;
                break;
            case Mar: std::cout << "Март" << std::endl;
                break;
            case Apr: std::cout << "Апрель" << std::endl;
                break;
            case May: std::cout << "Май" << std::endl;
                break;
            case Jun: std::cout << "Июнь" << std::endl;
                break;
            case Jul: std::cout << "Июль" << std::endl;
                break;
            case Aug: std::cout << "Август" << std::endl;
                break;
            case Sen: std::cout << "Сентябрь" << std::endl;
                break;
            case Oct: std::cout << "Октябрь" << std::endl;
                break;
            case Nov: std::cout << "Ноябрь" << std::endl;
                break;
            case Dec: std::cout << "Декабрь" << std::endl;
                break;
            case 0: std::cout << "До свидания!";
                break;
            default: std::cout << "Некорректный ввод " << std::endl;
                break;
            }
    } while (pass != 0);
   
           
    
}