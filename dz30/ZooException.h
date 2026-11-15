#pragma once
#include <string>
#include <iostream>
using namespace std;

class ZooExeption
{

public:

	virtual ~ZooExeption() = default;
	virtual string showMessage() const = 0;

};

class NameException:
	public ZooExeption
{
public:
	string showMessage() const override {
		return "Name Exception";
	};
};

class PredatorException:
	public ZooExeption
{
public:
	string showMessage() const override {
		return "";
	}

};

class MaxCapacityException:
	public ZooExeption
{
public:
	string showMessage() const override {
		return "";
	}
	
};

