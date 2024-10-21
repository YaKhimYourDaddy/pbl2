#include "Employee.h"

Employee::Employee(const string &idEmployee, const string &idCitizen, const string &encodedShift, const string &idRole, const string &startDate, const string &endDate)
    : idEmployee(idEmployee), idCitizen(idCitizen), encodedShift(encodedShift), idRole(idRole), startDate(startDate), endDate(endDate) {}

string Employee::getId() const {
    return idEmployee;
}

string Employee::getCitizenId() const {
    return idCitizen;
}

string Employee::getEncodedShift() const {
    return encodedShift;
}

string Employee::getRoleId() const {
    return idRole;
}

string Employee::getStartDate() const {
    return startDate;
}

string Employee::getEndDate() const {
    return endDate;
}

void Employee::setEncodedShift(const string &encodedShift) {
    this->encodedShift = encodedShift;
}

void Employee::setRoleId(const string &idRole) {
    this->idRole = idRole;
}

void Employee::setStartDate(const string &startDate) {
    this->startDate = startDate;
}

void Employee::setEndDate(const string &endDate) {
    this->endDate = endDate;
}
