#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
    string habitat;
public:
    Mammal();
    Mammal(string name, bool predator,string habitat);

    string getHabitat()const;
    void setHabitat(const string& habitat);

    void show()const override;
   
};

