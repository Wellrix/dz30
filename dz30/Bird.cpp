#include "Bird.h"

Bird::Bird()
{
	flightSpeed = 0.0;
}

Bird::Bird(string name, bool predator, double flightSpeed):
	Animal(name,predator)
{
	this->flightSpeed = flightSpeed;
}

double Bird::getSpeed() const
{
	return flightSpeed;
}

void Bird::setSpeed(const double& flightSpeed)
{
	this->flightSpeed = flightSpeed;
}

void Bird::show() const
{
	Animal::show();
	cout << "Flight speed(Km/h): " << flightSpeed << endl;
}
