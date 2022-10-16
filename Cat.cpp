//
// Created by lukas on 16.10.2022.
//

#include <iostream>
#include "Cat.h"

Cat::Cat(int limbCount, const string &name, bool isProtected) : Animal(limbCount, name, isProtected) {}

Cat::Cat() {}

void Cat::initMice() {
    for (int i = 0; i < 5; ++i) {
        mice[i] = (i + 1) * 100 % 23;
    }
}

void Cat::initCat(string name, int levelOfMouseHunting) {
    setLimbCount(4);
    setName(name);
    setIsProtected(false);
    initMice();
    Cat::levelOfMouseHunting = levelOfMouseHunting;
}

int Cat::getLevelOfMouseHunting() const {
    return levelOfMouseHunting;
}

void Cat::setLevelOfMouseHunting(int levelOfMouseHunting) {
    Cat::levelOfMouseHunting = levelOfMouseHunting;
}

const int Cat::getMice(int yearIndex) const {
    if (yearIndex > 5 || yearIndex < 1) {
        std::cerr << "Invalid year index";
        return 0;
    }
    return mice[yearIndex - 1];
}

void Cat::giveVoice() const {
    std::cout << "Miau Miau";
}

void Cat::info() {
    cout << "Name of cat is : " << getName() << ", limb count is equal to:  " << getLimbCount()
         << ", level of mouse hunting is equal to " << levelOfMouseHunting << "and this cat is "
         << (isProtected() == true ? " of course " : " not ") << "protected";
}


