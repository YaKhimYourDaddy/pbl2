#include "ScreenMode.h"

ScreenMode::ScreenMode(const string &idScreenMode, const string &name, const string &description)
    : idScreenMode(idScreenMode), name(name), description(description) {}

string ScreenMode::getId() const {
    return idScreenMode;
}

string ScreenMode::getName() const {
    return name;
}

string ScreenMode::getDescription() const {
    return description;
}

void ScreenMode::setName(const string &name) {
    this->name = name;
}

void ScreenMode::setDescription(const string &description) {
    this->description = description;
}
