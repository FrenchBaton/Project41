#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(string n);
	void makeSound() const;
};

