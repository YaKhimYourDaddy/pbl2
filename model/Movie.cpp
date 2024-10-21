#include "Movie.h"

Movie::Movie(const string &idMovie, const string &name, const string &description, const string &releaseDate, int duration)
    : idMovie(idMovie), name(name), description(description), releaseDate(releaseDate), duration(duration) {}

string Movie::getId() const {
    return idMovie;
}

string Movie::getName() const {
    return name;
}

string Movie::getDescription() const {
    return description;
}

string Movie::getReleaseDate() const {
    return releaseDate;
}

int Movie::getDuration() const {
    return duration;
}

void Movie::setName(const string &name) {
    this->name = name;
}

void Movie::setDescription(const string &description) {
    this->description = description;
}

void Movie::setReleaseDate(const string &releaseDate) {
    this->releaseDate = releaseDate;
}

void Movie::setDuration(int duration) {
    this->duration = duration;
}
