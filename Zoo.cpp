//
// Created by lucad on 10/01/2024.
//

#include <numeric>
#include <algorithm>
#include "Zoo.h"
int Zoo::MAX_CAPACITY = 15;

Zoo::Zoo() : name("Unknown Zoo") {
}

Zoo::Zoo(string _name) : name(_name) {
}

Zoo::Zoo(const Zoo &copyZoo, const vector<Animal*>& animals)
        : name(copyZoo.name), animals(animals) {
}



void Zoo::listAnimals() const {
    cout << "Animals in the Zoo '" << name << "':" << endl;

    for (Animal *animal : animals) {
        animal->printInfo();
        cout << "----------------------" << endl;
    }
}


void Zoo::addAnimal(Animal* newAnimal) {
    if (animals.size() >= MAX_CAPACITY) {
        cout << "Zoo at maximum capacity. Cannot add more animals." << endl;
        return;
    }

    auto it = lower_bound(animals.begin(), animals.end(), newAnimal, compareAnimalNames);
    if (it != animals.end() && (*it)->getName() == newAnimal->getName()) {
        cout << "An animal with the name '" << newAnimal->getName() << "' already exists in the zoo." << endl;
        return;
    }

    animals.insert(it, newAnimal);
}

int Zoo::searchAnimalByName(const string& animalName) const {

    auto it = lower_bound(animals.begin(), animals.end(), animalName,
                          [](const Animal* a, const string& name) {
                              return a->getName() < name;
                          });

    if (it != animals.end() && (*it)->getName() == animalName) {
        return distance(animals.begin(), it);
    } else {
        return -1;
    }
}



void Zoo::removeAnimalByName(const string &animalName) {
    auto removeIt = remove_if(animals.begin(), animals.end(),
                              [animalName](const Animal* a) {
                                  return a->getName() == animalName;
                              });

    for (auto it = removeIt; it != animals.end(); ++it) {
        delete *it;
    }
    animals.erase(removeIt, animals.end());

    if (removeIt == animals.begin()) {
        cout << "Animal with name '" << animalName << "' not found in the zoo." << endl;
    }
}

bool Zoo::compareAnimalNames(const Animal* a1, const Animal* a2) {
    return a1->getName() < a2->getName();
}

void Zoo::setName(string newName) {
    name = newName;
}

string Zoo::getName() const {
    return name;
}


double Zoo::averageAgeForType(const string& animalType) {

    vector<Animal*> animalsOfType;
    copy_if(animals.begin(), animals.end(), back_inserter(animalsOfType),
            [animalType](const Animal* a) {
                return a->getType() == animalType;
            });

    if (!animalsOfType.empty()) {
        double totalAge = accumulate(animalsOfType.begin(), animalsOfType.end(), 0.0,
                                     [](double sum, const Animal* a) {
                                         return sum + a->getAge();
                                     });
        return totalAge / animalsOfType.size();
    } else {
        return -1.0;
    }
}


