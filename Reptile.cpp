//
// Created by lucad on 10/01/2024.
//

#include "Reptile.h"

Reptile::Reptile()
        : Animal(), scalePattern("") {
    // Initialisation par défaut
}

Reptile::Reptile(string name, string color, string scalePattern, string diet, string habitat, string sounds, bool isPet, int age, double weight, double height)
        : Animal("Reptile", name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern){
    // Initialisation avec les valeurs fournies
}

Reptile::Reptile(const Reptile &reptile)
        : Animal(reptile.getType(),reptile.getName(), reptile.getColor(), reptile.getDiet(), reptile.getHabitat(), reptile.getSounds(), reptile.getIsPet(), reptile.getAge(),
                 reptile.getWeight(), reptile.getHeight()), scalePattern(reptile.scalePattern) {
    // Copie des membres du reptile source vers le nouvel reptile
}

void Reptile::setScalePattern(const string &newScalePattern) {
    scalePattern = newScalePattern;
}

string Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::printInfo() {
    cout << "Animal of type Reptile:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Scale Pattern: " << scalePattern << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Sounds: " << getSounds() << endl;
    cout << "Is Pet: " << (getIsPet() ? "" : "not ") << "a pet" << endl;
    cout << "Age: " << getAge() << " years" << endl;
    cout << "Weight: " << getWeight() << " kg" << endl;
    cout << "Height: " << getHeight() << " meters" << endl;

}
