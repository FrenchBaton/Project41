#pragma once
#include<iostream>
using namespace std;
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird();
	Bird(string n);
	void makeSound() const;
};

