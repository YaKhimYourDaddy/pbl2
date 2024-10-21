#ifndef ACTORINMOVIE_H
#define ACTORINMOVIE_H

#include <iostream>
using namespace std;

class ActorInMovie {
private:
    string idActor;
    string idMovie;

public:
    ActorInMovie(const string &idActor, const string &idMovie);
    string getActorId() const;
    string getMovieId() const;
};

#endif // ACTORINMOVIE_H
