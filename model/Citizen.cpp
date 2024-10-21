#include "Citizen.h"

Citizen::Citizen(const string &idCitizen, const string &name)
    : idCitizen(idCitizen), name(name) {}

string Citizen::getId() const {
    return idCitizen;
}

string Citizen::getName() const {
    return name;
}

void Citizen::setName(const string &name) {
    this->name = name;
}
