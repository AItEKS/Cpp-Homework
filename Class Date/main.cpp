#include <iostream>
#include "Date.h"

int main()
{
    setlocale(LC_ALL, "");

    Date a(29, 2, 2020);
    Date b("12.12.2023");
    Date c(25, "Март", 2024);

    std::cout << "Первая дата: " << a << std::endl;
    std::cout << "Вторая дата: " << b << std::endl;
    std::cout << "Разница между датами: " << a - b << std::endl;

    std::cout << "День недели первой даты: " << a.weekDay() << std::endl;
    std::cout << "День недели второй даты: " << b.weekDay() << std::endl;
    std::cout << "День недели третьей даты: " << c.weekDay() << std::endl;

    a.calculateEasterDate();
    b.calculateEasterDate();
    c.calculateEasterDate();

    return 0;
}
