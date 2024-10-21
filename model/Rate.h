#ifndef RATE_H
#define RATE_H

#include <iostream>
using namespace std;

class Rate {
private:
    string idRate;
    string name;
    string description;

public:
    Rate(const string &idRate, const string &name, const string &description);
    string getId() const;
    string getName() const;
    string getDescription() const;
    void setName(const string &name);
    void setDescription(const string &description);
};

#endif // RATE_H
