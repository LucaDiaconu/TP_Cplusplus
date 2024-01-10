//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_REPTILE_H
#define UNTITLED_REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
public:
    Reptile();
    Reptile(string name, string color, string scalePattern, string diet, string habitat, string sounds, bool isPet, int age, double weight, double height);
    Reptile(const Reptile &reptile);

    void setScalePattern(const string &newScalePattern);
    string getScalePattern() const;

    void printInfo() override;

private:
    string scalePattern;
};


#endif //UNTITLED_REPTILE_H
