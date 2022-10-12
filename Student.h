//
// Created by student on 12.10.2022.
//

#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H


#include "Person.h"

using namespace std;

class Student : public Person {
private:
    string index;
public:
    const string &getIndex() const;

    void setIndex(const string &index);

    void getStudentInfo();

    Student(const string &name1, const string &surname1, int age1, const string &index);
};


#endif //LAB1_STUDENT_H
