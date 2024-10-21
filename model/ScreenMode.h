#ifndef SCREENMODE_H
#define SCREENMODE_H

#include <iostream>
using namespace std;

class ScreenMode {
private:
    string idScreenMode;
    string name;
    string description;

public:
    ScreenMode(const string &idScreenMode, const string &name, const string &description);
    string getId() const;
    string getName() const;
    string getDescription() const;
    void setName(const string &name);
    void setDescription(const string &description);
};

#endif // SCREENMODE_H
