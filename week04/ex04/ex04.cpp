#include "Date.h"
#include <iostream>
using namespace std;

int main() {
    Date date;
    date.input();
    cout << "The given day: ";
    date.nextDay();
    cout << "The next day: ";
    date.output();
    return 0;
}
