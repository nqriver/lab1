//
// Created by lukas on 16.10.2022.
//

#ifndef LAB1_ANIMAL_H
#define LAB1_ANIMAL_H

using namespace std;

#include <string>


class Animal {

private:
    int limbCount;
    string name;
    bool is_protected;

public:

    Animal();

    Animal(int limbCount, const string &name, bool isProtected = true);

    int getLimbCount() const;

    void setLimbCount(int limbCount);

    const string &getName() const;

    void setName(const string &name);

    bool isProtected() const;

    void setIsProtected(bool isProtected);

    void giveVoice();

    void info();
};


#endif //LAB1_ANIMAL_H
