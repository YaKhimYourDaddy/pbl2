#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    float mathScore;
    float literatureScore;
public:
    Student();
    void input();
    float average() const;
    void output() const;
};

#endif
