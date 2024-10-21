#include "Rate.h"

Rate::Rate(const string &idRate, const string &name, const string &description)
    : idRate(idRate), name(name), description(description) {}

string Rate::getId() const {
    return idRate;
}

string Rate::getName() const {
    return name;
}

string Rate::getDescription() const {
    return description;
}

void Rate::setName(const string &name) {
    this->name = name;
}

void Rate::setDescription(const string &description) {
    this->description = description;
}
