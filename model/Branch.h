#ifndef BRANCH_H
#define BRANCH_H

#include <iostream>
using namespace std;

class Branch {
private:
    string idBranch;
    string idCity;
    string address;

public:
    Branch(const string &idBranch, const string &idCity, const string &address);
    string getId() const;
    string getCityId() const;
    string getAddress() const;
    void setAddress(const string &address);
};

#endif // BRANCH_H
