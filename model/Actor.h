#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
using namespace std;

class Actor {
private:
    string idActor;
    string name;

public:
    Actor(const string &idActor, const string &name);
    string getId() const;
    string getName() const;
    void setName(const string &name);
};

#endif // ACTOR_H
