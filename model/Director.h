#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
using namespace std;

class Director {
private:
    string idDirector;
    string name;

public:
    Director(const string &idDirector, const string &name);
    string getId() const;
    string getName() const;
    void setName(const string &name);
};

#endif // DIRECTOR_H
