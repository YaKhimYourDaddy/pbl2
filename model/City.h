#ifndef CITY_H
#define CITY_H

#include <iostream>
using namespace std;

class City {
private:
    string idCity;
    string name;

public:
    City(const string &idCity, const string &name);
    string getId() const;
    string getName() const;
    void setName(const string &name);
};

#endif // CITY_H
