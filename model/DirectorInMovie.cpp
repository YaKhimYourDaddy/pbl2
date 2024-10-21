 #include "DirectorInMovie.h"

DirectorInMovie::DirectorInMovie(const string &idDirector, const string &idMovie)
    : idDirector(idDirector), idMovie(idMovie) {}

string DirectorInMovie::getDirectorId() const {
    return idDirector;
}

string DirectorInMovie::getMovieId() const {
    return idMovie;
}
