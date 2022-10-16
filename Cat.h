//
// Created by lukas on 16.10.2022.
//

#ifndef LAB1_CAT_H
#define LAB1_CAT_H


#include "Animal.h"

class Cat : public Animal {

private:
    Cat(int limbCount, const string &name, bool isProtected, int levelOfMouseHunting);

    int levelOfMouseHunting;
    int mice[5];

public:
    Cat(int limbCount, const string &name, bool isProtected);

    Cat();


    void initMice();

    int getLevelOfMouseHunting() const;

    void setLevelOfMouseHunting(int levelOfMouseHunting);

    const int getMice(int yearIndex) const;

    void giveVoice() const;

    void info();

    void initCat(string name, int levelOfMouseHunting);
};


#endif //LAB1_CAT_H
