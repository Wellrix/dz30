#pragma once
#include "Animal.h"
#include "ZooException.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cage
{
	int num;
	int MaxCapacity;
	vector <Animal*> animals;

public:
	Cage();
	Cage(int num,int MaxCapacity);
	~Cage();

	int getNum()const;
	void setNum(const int& num);

	int getMaxCapacity()const;
	void setMaxCapacity(const int& MaxCapacity);

	int getCurCount()const;

	void addAnimal(Animal* animal);
	void removeAnimal(const string& name);
	Animal* findAnimal(const string& name) const;
	void show() const;


};

