#ifndef GENRE_H
#define GENRE_H

#include <iostream>
using namespace std;

class Genre {
private:
    string idGenre;
    string name;

public:
    Genre(const string &idGenre, const string &name);
    string getId() const;
    string getName() const;
    void setName(const string &name);
};

#endif // GENRE_H
