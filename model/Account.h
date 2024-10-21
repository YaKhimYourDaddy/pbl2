#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
private:
    string username;
    string password;
    string mail;
    string phone;
    string idCitizen;

public:
    Account(const string &username, const string &password, const string &mail, const string &phone, const string &idCitizen);
    string getUsername() const;
    string getPassword() const;
    string getMail() const;
    string getPhone() const;
    string getCitizenId() const;
    void setPassword(const string &password);
    void setMail(const string &mail);
    void setPhone(const string &phone);
};

#endif // ACCOUNT_H
