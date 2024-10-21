#include "ScreenModeInMovie.h"

ScreenModeInMovie::ScreenModeInMovie(const string &idScreenMode, const string &idMovie)
    : idScreenMode(idScreenMode), idMovie(idMovie) {}

string ScreenModeInMovie::getScreenModeId() const {
    return idScreenMode;
}

string ScreenModeInMovie::getMovieId() const {
    return idMovie;
}
