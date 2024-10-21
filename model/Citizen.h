#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
using namespace std;

class Citizen {
private:
    string idCitizen;
    string name;

public:
    Citizen(const string &idCitizen, const string &name);
    string getId() const;
    string getName() const;
    void setName(const string &name);
};

#endif // CITIZEN_H
