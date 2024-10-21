#include "Genre.h"

Genre::Genre(const string &idGenre, const string &name) : idGenre(idGenre), name(name) {}

string Genre::getId() const {
    return idGenre;
}

string Genre::getName() const {
    return name;
}

void Genre::setName(const string &name) {
    this->name = name;
}
