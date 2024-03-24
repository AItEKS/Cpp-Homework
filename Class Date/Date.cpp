#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<int> dateParts{};



Date::Date(int day, int month, int year)
{
    JDate = DateToJD(day, month, year);
}

Date::Date(std::string date)
{
    splitDate(date);
    JDate = DateToJD(dateParts[0], dateParts[1], dateParts[2]);
}

Date::~Date()
{
    JDate = 0;
    dateParts.clear();
}

double Date::DateToJD(int day, int month, int year)
{
    checkDate(day, month, year);

    double gregorianAdjustment = 1;
    if (year < 1582) gregorianAdjustment = 0;
    if (year <= 1582 && month < 10) gregorianAdjustment = 0;
    if (year <= 1582 && month == 10 && day < 5) gregorianAdjustment = 0;
    double JDate = -1 * (int)(7 * ((int)((month + 9) / 12) + year) / 4);

    int sign = 1;
    if ((month - 9) < 0) sign = -1;
    int absDiff = month - 9;
    if (absDiff < 0) absDiff *= -1;
    double j1 = (int)(year + sign * (int)(absDiff / 7));
    j1 = -1 * (int)((std::floor(j1 / 100) + 1) * 3 / 4);
    JDate = JDate + (int)(275 * month / 9) + day + (gregorianAdjustment * j1);
    JDate = JDate + 1721027 + 2 * gregorianAdjustment + 367 * year - 0.5;

    return JDate;
}

void Date::JDToDate(double JDate)
{
    double z = std::floor(JDate + 0.5);
    double w = std::floor((z - 1867216.25) / 36524.25);
    double x = std::floor(w / 4);
    double a = z + 1 + w - x;
    double b = a + 1524;
    double c = std::floor((b - 122.1) / 365.25);
    double d = std::floor(365.25 * c);
    double e = std::floor((b - d) / 30.6001);

    double day = std::floor(b - d - std::floor(30.6001 * e));
    double month = e < 14 ? e - 1 : e - 13;
    double year = month > 2 ? c - 4716 : c - 4715;

    dateParts.clear();
    dateParts.push_back(static_cast<int>(day));
    dateParts.push_back(static_cast<int>(month));
    dateParts.push_back(static_cast<int>(year));
}

std::string Date::weekDay()
{
    std::string daysOfweek[]{ "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
    return daysOfweek[static_cast<int>(JDate + 0.5) % 7];
}

void Date::splitDate(std::string date)
{
    std::istringstream iss(date);
    std::string token;

    while (std::getline(iss, token, '.')) {
        dateParts.push_back(std::stoi(token));
    }
}

void Date::checkDate(int day, int month, int year)
{
    if (month > 12 || month < 1)
        throw DateException("Ошибка! Месяц введен некорректно!");

    if (day < 1)
        throw DateException("Ошибка! День введен некорректно!");

    int daysInMonth = 0;
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonth = 31;
        break;
    case 4: case 6: case 9: case 11:
        daysInMonth = 30;
        break;
    case 2:
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    default:
        throw DateException("Ошибка! Некорректный месяц.");
    }

    if (day > daysInMonth)
        throw DateException("Ошибка! Некорректное количество дней для выбранного месяца.");
}

double Date::operator-(const Date& other)
{
    return this->JDate < other.JDate ? other.JDate - this->JDate : this->JDate - other.JDate;
}

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    Date temp = date;
    temp.JDToDate(date.JDate);

    os << dateParts[0] << "." << dateParts[1] << "." << dateParts[2];
    return os;
}
