#include "Branch.h"

Branch::Branch(const string &idBranch, const string &idCity, const string &address)
    : idBranch(idBranch), idCity(idCity), address(address) {}

string Branch::getId() const {
    return idBranch;
}

string Branch::getCityId() const {
    return idCity;
}

string Branch::getAddress() const {
    return address;
}

void Branch::setAddress(const string &address) {
    this->address = address;
}
