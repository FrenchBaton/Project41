#include "Dog.h"

Dog::Dog()
{
	name = "Dog";
}

Dog::Dog(string n) :Animal(n)
{
	name = "Dog";
}

void Dog::makeSound() const
{
	cout << "Woof" << endl;
}