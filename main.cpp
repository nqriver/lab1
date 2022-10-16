#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


using namespace std;


void createArraysForPerson() {
    Person p1[3];
    Person *p2;
    Person *p3[3];
    Person **p4;
    for (int i = 0; i < 3; i++) {
        p1[i].init("Anna", "Nowak", 20 + i);
        p1[i].showInfoPerson();
    }
    p2 = new Person[3];
    for (int i = 0; i < 3; i++) {
        p2[i].init("Ola", "Adamek", 20 + i);
        p2[i].showInfoPerson();
    }
    for (int i = 0; i < 3; i++) {
        p3[i] = new Person("Kasia", "Kowalska", 20 + i);
        p3[i]->showInfoPerson();
    }
    p4 = new Person *[3];
    for (int i = 0; i < 3; i++) {
        p4[i] = new Person("Pawel", "Wojcik", 20 + i);
        p4[i]->showInfoPerson();
    }
    for (int i = 0; i < 3; i++) {
        delete p3[i];
    }
    for (int i = 0; i < 3; i++) {
        delete p4[i];
    }
    delete[] p4;
}

void createArraysForStudent() {
    Student p1[3];
    Student *p2;
    Student *p3[3];
    Student **p4;

    for (int i = 0; i < 3; i++) {
        p1[i].init("Anna", "Nowak", 20 + i);
        int index = (i + 1) * 100;
        p1[i].setIndex(std::to_string(index));
        p1[i].getStudentInfo();
    }

    p2 = new Student[3];
    for (int i = 0; i < 3; i++) {
        p2[i].init("Ola", "Adamek", 20 + i);
        int index = (i + 1) * 100;
        p1[i].setIndex(std::to_string(index));
        p2[i].getStudentInfo();
    }
    for (int i = 0; i < 3; i++) {
        int index = (i + 1) * 100;
        p3[i] = new Student("Kasia", "Kowalska", 20 + i, std::to_string(index));
        p3[i]->getStudentInfo();
    }
    p4 = new Student *[3];
    for (int i = 0; i < 3; i++) {
        int index = (i + 1) * 100;
        p4[i] = new Student("Pawel", "Wojcik", 20 + i, std::to_string(index));
        p4[i]->getStudentInfo();
    }
    for (auto &i : p3) {
        delete i;
    }
    for (int i = 0; i < 3; i++) {
        delete p4[i];
    }
    delete[] p4;
}


void createObjectsAndShowInfo() {
    cout << endl << "Obiekty klasy Person" << endl;
    Person o1("Grazyna", "Nowak", 45);
    o1.showInfoPerson();
    cout << "Czy pelnoletnia?: " << o1.is_18() << endl;
    o1.setAge(16);
    cout << endl << "Obiekty klasy Teacher" << endl;
    Teacher n1("Barbara", "Kowalska", 56, 30, "Phd");
    n1.showInfoTeacher();
    cout << "Czy ma Phd?: " << n1.is_Phd() << endl;
    n1.setAge(34);
}


int howManyProtectedAnimals(std::vector<Animal> &animals) {
    int counter = 0;
    for (const auto &i : animals) {
        if (i.isProtected()) {
            counter++;
        }
    }
    return counter;
}

int howManyTrackerDogs(std::vector<Dog> &dogs) {
    int counter = 0;
    for (const auto &i : dogs) {
        if (i.getLevelOfGuideSkills() < i.getLevelOfTrackerSkills()) {
            counter++;
        }
    }
    return counter;
}

void howManyCats(std::vector<Cat> &cats) {
    for (const auto &cat : cats) {
        int sumOfMicePerCat = 0;
        for (int yearIndex = 1; yearIndex <= 5; yearIndex++) {
            sumOfMicePerCat += cat.getMice(yearIndex);
        }
        std::cout << "Cat named " << cat.getName() << " caught " << sumOfMicePerCat << " in 5 years\n";
    }
}


int main() {


    Animal kangaroo(2, "kangaroo", true);

    Dog border(4, "puszek", "border collie", 10, 9);
    Dog dalmatynczyk(4, "tammy", "dalmatynczyk", 4, 10);
    Dog husky(4, "vela", "husky", 9, 10);

    Cat antoni;
    antoni.initCat("antoni", 7);

    Cat tomek;
    tomek.initCat("tomek", 9);

    std::vector<Animal> animals{kangaroo, border, dalmatynczyk, husky, antoni, tomek};
    std::vector<Dog> dogs{border, dalmatynczyk, husky};
    std::vector<Cat> cats{antoni, tomek};


    std::cout << "Number of mice that fell prey to the cats: \n";
    howManyCats(cats);

    std::cout << "Number of tracker dogs: " << howManyTrackerDogs(dogs) << '\n';

    std::cout << "Number of protected animals: " <<     howManyProtectedAnimals(animals) << '\n';
//
//    createArraysForPerson();
//    createArraysForStudent();

}
