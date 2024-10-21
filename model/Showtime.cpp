#include "Showtime.h"

Showtime::Showtime(const string &idShowtime, const string &idRoom, const string &idScreenModeInMovie, const string &onScreenDateTime)
    : idShowtime(idShowtime), idRoom(idRoom), idScreenModeInMovie(idScreenModeInMovie), onScreenDateTime(onScreenDateTime) {}

string Showtime::getId() const {
    return idShowtime;
}

string Showtime::getRoomId() const {
    return idRoom;
}

string Showtime::getScreenModeInMovieId() const {
    return idScreenModeInMovie;
}

string Showtime::getOnScreenDateTime() const {
    return onScreenDateTime;
}

void Showtime::setOnScreenDateTime(const string &onScreenDateTime) {
    this->onScreenDateTime = onScreenDateTime;
}
