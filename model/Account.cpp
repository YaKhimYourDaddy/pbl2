#include "Account.h"

Account::Account(const string &username, const string &password, const string &mail, const string &phone, const string &idCitizen)
    : username(username), password(password), mail(mail), phone(phone), idCitizen(idCitizen) {}

string Account::getUsername() const {
    return username;
}

string Account::getPassword() const {
    return password;
}

string Account::getMail() const {
    return mail;
}

string Account::getPhone() const {
    return phone;
}

string Account::getCitizenId() const {
    return idCitizen;
}

void Account::setPassword(const string &password) {
    this->password = password;
}

void Account::setMail(const string &mail) {
    this->mail = mail;
}

void Account::setPhone(const string &phone) {
    this->phone = phone;
}
