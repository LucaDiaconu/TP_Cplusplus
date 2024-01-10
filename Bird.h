//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_BIRD_H
#define UNTITLED_BIRD_H

#include "Animal.h"

class Bird : public Animal{
public :

    Bird();
    Bird(string _name, string _color, double _wingspan, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height);
    Bird(Bird const &bird);

    void printInfo() override;
    void setWingspan(double newWingspan);
    double getWingspan() const;

protected:
    double wingspan;

};


#endif //UNTITLED_BIRD_H
