#include "GenreInMovie.h"

GenreInMovie::GenreInMovie(const string &idGenre, const string &idMovie)
    : idGenre(idGenre), idMovie(idMovie) {}

string GenreInMovie::getGenreId() const {
    return idGenre;
}

string GenreInMovie::getMovieId() const {
    return idMovie;
}
