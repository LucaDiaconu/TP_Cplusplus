#include <iostream>

#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Zoo.h"
int main() {
    Reptile a("kiki", "Green", "Distinct Pattern", "Carnivore", "Jungle", "Hiss", false, 5, 3.0, 1.2);

    Zoo zoo("MyZoo");

    zoo.addAnimal(&a);
    zoo.listAnimals();

    return 0;
}
