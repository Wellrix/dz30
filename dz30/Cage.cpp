#include "Cage.h"

Cage::Cage()
{
    num = 0;
    MaxCapacity = 5;
}

Cage::Cage(int num, int MaxCapacity)
{
    this->num = num;
    this->MaxCapacity = MaxCapacity;
}

Cage::~Cage()
{
    for (int i = 0; i < animals.size(); i++) {
        delete animals[i];
    }
}

int Cage::getNum() const
{
    return num;
}

void Cage::setNum(const int& num)
{
    this->num = num;
}

int Cage::getMaxCapacity() const
{
    return MaxCapacity;
}

void Cage::setMaxCapacity(const int& MaxCapacity)
{
    this->MaxCapacity = MaxCapacity;
}

int Cage::getCurCount() const
{
    return animals.size();
}

void Cage::addAnimal(Animal* animal)
{
    if (animal == nullptr) {
        return;
    }
    else if (animals.size() >= MaxCapacity) {
        throw MaxCapacityException();
    }
    else if (!animals.empty() && animals[0]->getPredator() != animal->getPredator()) {
        throw PredatorException();
    }
    animals.push_back(animal);
}

void Cage::removeAnimal(const string& name)
{
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i]->getName() == name) {
            delete animals[i];
            animals.erase(animals.begin() + i);
            return;
        }
    }

}

Animal* Cage::findAnimal(const string& name) const
{
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i]->getName() == name) {
            return animals[i];

        }
    }
    return nullptr;
}

void Cage::show() const
{
    cout << "Cage: " << num << endl;
    cout << "Current animals: " << getCurCount() << "/" << MaxCapacity << endl;
}
