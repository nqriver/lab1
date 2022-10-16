//
// Created by student on 12.10.2022.
//

#include <iostream>
#include "Student.h"


using namespace std;

const string &Student::getIndex() const {
    return index;
}

void Student::setIndex(const string &index) {
    Student::index = index;
}

void Student::getStudentInfo() {
    showInfoPerson();
    std::cout << "\n" << "Student index is: " << index << '\n';
}

Student::Student(const string &name1, const string &surname1, int age1, const string &m_index)
: Person(name1, surname1,age1) {
    index = m_index;
    std::cout << "Constructing student object...";
}

Student::Student() {}
