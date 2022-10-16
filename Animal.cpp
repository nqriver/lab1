//
// Created by lukas on 16.10.2022.
//

#include "Animal.h"
#include <iostream>


Animal::Animal() {}

Animal::Animal(int limbCount, const string &name, bool isProtected) : limbCount(limbCount), name(name),
                                                                      is_protected(isProtected) {}

int Animal::getLimbCount() const {
    return limbCount;
}

void Animal::setLimbCount(int limbCount) {
    Animal::limbCount = limbCount;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

bool Animal::isProtected() const {
    return is_protected;
}

void Animal::setIsProtected(bool isProtected) {
    is_protected = isProtected;
}

void Animal::giveVoice() {
    cout << "Chrum, miau, hau, piiiii";
}


void Animal::info() {
    cout << "Name of animal is : " << name << ", limb count is equal to:  " << limbCount << "and this animal is "
    << (is_protected == true ? " of course " : " not ") << "protected";
}
