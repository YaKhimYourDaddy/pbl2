#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string idEmployee;
    string idCitizen;
    string encodedShift;
    string idRole;
    string startDate;
    string endDate;

public:
    Employee(const string &idEmployee, const string &idCitizen, const string &encodedShift, const string &idRole, const string &startDate, const string &endDate);
    string getId() const;
    string getCitizenId() const;
    string getEncodedShift() const;
    string getRoleId() const;
    string getStartDate() const;
    string getEndDate() const;
    void setEncodedShift(const string &encodedShift);
    void setRoleId(const string &idRole);
    void setStartDate(const string &startDate);
    void setEndDate(const string &endDate);
};

#endif // EMPLOYEE_H
