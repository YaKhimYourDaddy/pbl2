#include "RateInMovie.h"

RateInMovie::RateInMovie(const string &idRate, const string &idMovie)
    : idRate(idRate), idMovie(idMovie) {}

string RateInMovie::getRateId() const {
    return idRate;
}

string RateInMovie::getMovieId() const {
    return idMovie;
}
