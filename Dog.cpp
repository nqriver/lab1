//
// Created by lukas on 16.10.2022.
//

#include <iostream>
#include "Dog.h"

Dog::Dog(int limbCount, const string &name, const string &breed, int levelOfGuideSkills,
         int levelOfTrackerSkills) : Animal(limbCount, name, false), breed(breed),
                                     levelOfGuideSkills(levelOfGuideSkills),
                                     levelOfTrackerSkills(levelOfTrackerSkills) {}

Dog::Dog(int limbCount, const string &name, bool isProtected) : Animal(limbCount, name, isProtected) {}

Dog::Dog() {}

void Dog::giveVoice() {
    std::cout << "Hau hau";
}

void Dog::info() {
    cout << "Name of dog is : " << getName() << " breed is " << breed << " level of guide skills is:  "
         << levelOfGuideSkills << " level of tracker skills is:  " << levelOfTrackerSkills
         << ", limb count is equal to:  " << getLimbCount() << "and this dog is "
         << (isProtected() == true ? " of course " : " not ") << "protected";
}

const string &Dog::getBreed() const {
    return breed;
}

void Dog::setBreed(const string &breed) {
    Dog::breed = breed;
}

int Dog::getLevelOfGuideSkills() const {
    return levelOfGuideSkills;
}

void Dog::setLevelOfGuideSkills(int levelOfGuideSkills) {
    Dog::levelOfGuideSkills = levelOfGuideSkills;
}

int Dog::getLevelOfTrackerSkills() const {
    return levelOfTrackerSkills;
}

void Dog::setLevelOfTrackerSkills(int levelOfTrackerSkills) {
    Dog::levelOfTrackerSkills = levelOfTrackerSkills;
}
