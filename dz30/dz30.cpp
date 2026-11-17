#include <iostream>
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include "ZooException.h"
#include "Cage.h"

using namespace std;

int main()
{
    Cage c1;
    Cage c2(1, 5);
    Cage c3(2, 10);

    try {
        c2.addAnimal(new Mammal("Elephant", false, "Savanna"));
        c2.addAnimal(new Bird("Chicken", false, 0));
        c2.addAnimal(new Fish("Fish-clown", false, false));
    }
    catch (ZooExeption& e) {
        cout << "Error: " << e.showMessage() << endl;
    }

    try {
        c3.addAnimal(new Mammal("Giraffe", false, "Savanna"));
        c3.addAnimal(new Bird("Pigeon", false, 10));
        c3.addAnimal(new Fish("Tuna", true, true));
    }
    catch (ZooExeption& e) {
        cout << "Error: " << e.showMessage() << endl;
    }

    Cage cSmall(3, 1);
    try {
        cSmall.addAnimal(new Mammal("Lion", true, "Savanna"));
        cSmall.addAnimal(new Mammal("Tiger", true, "Jungle"));
    }
    catch (ZooExeption& e) {
        cout << "Error: " << e.showMessage() << endl;
    }

    try {
        c1.addAnimal(new Mammal("", false, "Forest"));
    }
    catch (ZooExeption& e) {
        cout << "Error: " << e.showMessage() << endl;
    }

    cout << endl;
    c1.show();
    c2.show();
    c3.show();

    Animal* found = c2.findAnimal("Chicken");
    if (found != nullptr) {
        cout << "Found: ";
        found->show();
    }

    c2.removeAnimal("Chicken");
    cout << "\nAfter remove:" << endl;
    c2.show();

    return 0;
};









