#include "City.h"

City::City(const string &idCity, const string &name) : idCity(idCity), name(name) {}

string City::getId() const {
    return idCity;
}

string City::getName() const {
    return name;
}

void City::setName(const string &name) {
    this->name = name;
}
