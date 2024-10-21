#include "ActorInMovie.h"

ActorInMovie::ActorInMovie(const string &idActor, const string &idMovie)
    : idActor(idActor), idMovie(idMovie) {}

string ActorInMovie::getActorId() const {
    return idActor;
}

string ActorInMovie::getMovieId() const {
    return idMovie;
}
