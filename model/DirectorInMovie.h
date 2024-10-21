#ifndef DIRECTORINMOVIE_H
#define DIRECTORINMOVIE_H

#include <iostream>
using namespace std;

class DirectorInMovie {
private:
    string idDirector;
    string idMovie;

public:
    DirectorInMovie(const string &idDirector, const string &idMovie);
    string getDirectorId() const;
    string getMovieId() const;
};

#endif // DIRECTORINMOVIE_H
