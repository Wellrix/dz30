#include "Animal.h"

Animal::Animal()
{
    name = "Undefined";
    predator = false;
}

Animal::Animal(string name, bool predator)
{
    try {
        if (name.empty()) {
            throw NameException();
        }
        this->name = name;
        this->predator = predator;
    }
    catch (NameException& e) {
        cout << "Name empty!!!!" << endl;
        throw;
    }
}

void Animal::setName(const string& name)
{
    this->name = name;
}

string Animal::getName() const
{
    return name;
}

void Animal::setPredator(const bool& predator)
{
    this->predator = predator;
}

bool Animal::getPredator() const
{
    return predator;
}

void Animal::show() const
{
    cout << "Name: " << name << endl;
    cout << "Predator: ";
    if (predator == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
       
}
