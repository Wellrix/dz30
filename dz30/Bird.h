#pragma once
#include "Animal.h"
class Bird: 
	public Animal
{
	double flightSpeed;
public:
	Bird();
	Bird(string name, bool predator,double flightSpeed);
	
	double getSpeed()const;
	void setSpeed(const double& flightSpeed);

	void show()const override;

};

