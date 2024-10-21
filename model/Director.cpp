#include "Director.h"

Director::Director(const string &idDirector, const string &name) : idDirector(idDirector), name(name) {}

string Director::getId() const {
    return idDirector;
}

string Director::getName() const {
    return name;
}

void Director::setName(const string &name) {
    this->name = name;
}
