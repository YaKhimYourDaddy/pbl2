#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day, month, year;
    bool isLeapYear(int year) const;
    int daysInMonth(int month, int year) const;
public:
    Date(int d = 1, int m = 1, int y = 2000);
    void input();
    void nextDay();
    void output() const;
};

#endif
