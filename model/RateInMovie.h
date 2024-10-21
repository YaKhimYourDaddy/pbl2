#ifndef RATEINMOVIE_H
#define RATEINMOVIE_H

#include <iostream>
using namespace std;

class RateInMovie {
private:
    string idRate;
    string idMovie;

public:
    RateInMovie(const string &idRate, const string &idMovie);
    string getRateId() const;
    string getMovieId() const;
};

#endif // RATEINMOVIE_H
