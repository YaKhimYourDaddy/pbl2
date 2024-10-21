#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
using namespace std;

class Movie {
private:
    string idMovie;
    string name;
    string description;
    string releaseDate;
    int duration;

public:
    Movie(const string &idMovie, const string &name, const string &description, const string &releaseDate, int duration);
    string getId() const;
    string getName() const;
    string getDescription() const;
    string getReleaseDate() const;
    int getDuration() const;
    void setName(const string &name);
    void setDescription(const string &description);
    void setReleaseDate(const string &releaseDate);
    void setDuration(int duration);
};

#endif // MOVIE_H
