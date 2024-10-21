#include "Actor.h"

Actor::Actor(const string &idActor, const string &name) : idActor(idActor), name(name) {}

string Actor::getId() const {
    return idActor;
}

string Actor::getName() const {
    return name;
}

void Actor::setName(const string &name) {
    this->name = name;
}
