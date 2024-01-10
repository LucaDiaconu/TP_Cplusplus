//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal {

public:
    Animal();
    Animal(string _type, string _name, string _color, string _diet, string _habitat, string _sounds, bool _isPet, int _age, double _weight, double _height);
    Animal(Animal const &animal);
    virtual void printInfo();

    string getType() const;
    string getName() const;
    string getColor() const;
    string getDiet() const;
    string getHabitat() const;
    string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    void setType(const string &newType);
    void setName(const string &newName);
    void setColor(const string &newColor);
    void setDiet(const string &newDiet);
    void setHabitat(const string &newHabitat);
    void setSounds(const string &newSounds);
    void setIsPet(bool newIsPet);
    void setAge(int newAge);
    void setWeight(double newWeight);
    void setHeight(double newHeight);

protected:
    string type;
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;
};


#endif //UNTITLED_ANIMAL_H
