#pragma once
#include "Animal.h"
class Fish :
    public Animal
{
    bool deepsea;
public:
    Fish();
    Fish(string name, bool predator,bool deepsea);

    bool getDeep() const;
    void setDeep(const bool& deepsea);

    void show() const override;



};

