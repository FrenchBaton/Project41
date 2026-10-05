#pragma once
#include<iostream>
using namespace std;
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(string n);
	void makeSound() const;
};

