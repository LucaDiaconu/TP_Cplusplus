//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_MAMMAL_H
#define UNTITLED_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal{

public :

    Mammal();
    Mammal(string _name, string _color, string _furColor, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height);
    Mammal(Mammal const &mammal);

    void printInfo() override;
    void setFurColor(string newFurColor);
    string getFurColor() const;

protected:
    string furColor;
};


#endif //UNTITLED_MAMMAL_H
