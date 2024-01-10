//
// Created by lucad on 10/01/2024.
//

#ifndef UNTITLED_ZOO_H
#define UNTITLED_ZOO_H

#include <string>
#include <vector>
#include <algorithm>
#include "Animal.h"

using namespace std;

class Zoo {
public:
    Zoo();
    Zoo(string name);
    Zoo(const Zoo &copyZoo, const vector<Animal*>& animals);

    void listAnimals() const;
    void addAnimal(Animal* newAnimal);
    int searchAnimalByName(const string& ) const;
    void removeAnimalByName(const string& );
    double averageAgeForType(const string &animalType);

protected:
    string name;
    static int MAX_CAPACITY;
    vector<Animal*> animals;

    void setName(string newName);
    string getName() const;
    static bool compareAnimalNames(const Animal* a1, const Animal* a2);


};


#endif //UNTITLED_ZOO_H
