//
// Created by student on 12.10.2022.
//

#ifndef LAB1_TEACHER_H
#define LAB1_TEACHER_H


#include <string>
#include "Person.h"

using namespace std;

class Teacher : public Person {


private:
    int experience;
    string title;
public:
    Teacher(string name1, string surname1, int age1, int experience1, string title1);

    Teacher();

    void setTitle(string title1);

    int getExperience();

    bool is_Phd();

    void showInfoTeacher();
};


#endif //LAB1_TEACHER_H
