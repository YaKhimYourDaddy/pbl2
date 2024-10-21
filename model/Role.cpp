#include "Role.h"

Role::Role(const string &idRole, const string &name, const string &description, double wagePerHour)
    : idRole(idRole), name(name), description(description), wagePerHour(wagePerHour) {}

string Role::getId() const {
    return idRole;
}

string Role::getName() const {
    return name;
}

string Role::getDescription() const {
    return description;
}

double Role::getWagePerHour() const {
    return wagePerHour;
}

void Role::setDescription(const string &description) {
    this->description = description;
}

void Role::setWagePerHour(double wage) {
    this->wagePerHour = wage;
}
