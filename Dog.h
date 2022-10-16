//
// Created by lukas on 16.10.2022.
//

#ifndef LAB1_DOG_H
#define LAB1_DOG_H


#include "Animal.h"

class Dog : public Animal {
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;

public:

    Dog(int limbCount, const string &name, const string &breed, int levelOfGuideSkills,
        int levelOfTrackerSkills);

    Dog(int limbCount, const string &name, bool isProtected);


    const string &getBreed() const;

    void setBreed(const string &breed);

    int getLevelOfGuideSkills() const;

    void setLevelOfGuideSkills(int levelOfGuideSkills);

    int getLevelOfTrackerSkills() const;

    void setLevelOfTrackerSkills(int levelOfTrackerSkills);

    Dog();

    void giveVoice();

    void info();

};


#endif //LAB1_DOG_H
