#ifndef ROLE_H
#define ROLE_H

#include <iostream>
using namespace std;

class Role {
private:
    string idRole;
    string name;
    string description;
    double wagePerHour;

public:
    Role(const string &idRole, const string &name, const string &description, double wagePerHour);
    string getId() const;
    string getName() const;
    string getDescription() const;
    double getWagePerHour() const;
    void setDescription(const string &description);
    void setWagePerHour(double wage);
};

#endif // ROLE_H
