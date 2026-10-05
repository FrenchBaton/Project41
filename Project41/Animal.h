#pragma once
#include<iostream>
using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal();
	Animal(string n);
	virtual void makeSound() const = 0;
};

