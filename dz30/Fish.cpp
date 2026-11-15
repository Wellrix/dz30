#include "Fish.h"

Fish::Fish()
{
    deepsea = false;
}

Fish::Fish(string name, bool predator, bool deepsea) :
    Animal(name, predator)
{
    this->deepsea = deepsea;
}

bool Fish::getDeep() const
{
    return deepsea;
}

void Fish::setDeep(const bool& deepsea)
{
    this->deepsea = deepsea;
}

void Fish::show() const
{
    Animal::show();
    cout << "Deep sea: ";
    if (deepsea == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
