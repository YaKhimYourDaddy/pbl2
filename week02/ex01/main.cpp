#include "OTo.h"
#include <iostream>

using namespace std;

int main() {
    OTo car1("Toyota", "Camry", 2020, 240, 5, "Xang");
    OTo car2("Honda", "Civic", 2022, 220, 5, "Xang");

    car1.xuat();
    cout << endl;
    car2.xuat();
    
    cout << endl;
    if (car1 < car2) {
        cout << "Car 1 has a lower base speed than Car 2." << endl;
    } else {
        cout << "Car 1 does not have a base speed than Car 2." << endl;
    }

    return 0;
}
