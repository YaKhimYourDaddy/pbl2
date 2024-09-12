#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

bool Date::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth(int month, int year) const {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

void Date::input() {
    cout << "Input day: ";
    cin >> day;
    cout << "Input month: ";
    cin >> month;
    cout << "Input year: ";
    cin >> year;
}

void Date::nextDay() {
    day++;
    if (day > daysInMonth(month, year)) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::output() const {
    cout << day << "/" << month << "/" << year << endl;
}
