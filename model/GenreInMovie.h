#ifndef GENREINMOVIE_H
#define GENREINMOVIE_H

#include <iostream>
using namespace std;

class GenreInMovie {
private:
    string idGenre;
    string idMovie;

public:
    GenreInMovie(const string &idGenre, const string &idMovie);
    string getGenreId() const;
    string getMovieId() const;
};

#endif // GENREINMOVIE_H
