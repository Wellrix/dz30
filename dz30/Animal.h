#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animal
{
	string name;
	bool predator;
public:
	Animal();
	Animal(string name,bool predator);

	void setName(const string &name);
	string getName()const;

	void setPredator(const bool& predator);
	bool getPredator()const;

	virtual void show()const;
	virtual ~Animal() = default;



};

