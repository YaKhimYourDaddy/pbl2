#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : mathScore(0), literatureScore(0) {}

void Student::input() {
    cout << "Input name: ";
    getline(cin, name);
    cout << "Input math score: ";
    cin >> mathScore;
    cout << "Input literature score: ";
    cin >> literatureScore;
}

float Student::average() const {
    return (mathScore + literatureScore) / 2;
}

void Student::output() const {
    cout << "Student name: " << name << endl;
    cout << "Average score: " << average() << endl;
}
