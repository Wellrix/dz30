#include "Mammal.h"

Mammal::Mammal()
{
    habitat = "undefined";
}

Mammal::Mammal(string name, bool predator, string habitat):
    Animal(name,predator)
{
    this->habitat = habitat;
}

string Mammal::getHabitat() const
{
    return habitat;
}

void Mammal::setHabitat(const string& habitat)
{
    this->habitat = habitat;
}

void Mammal::show() const
{
    Animal::show();
    cout << "Habitat: " << habitat << endl;
}
