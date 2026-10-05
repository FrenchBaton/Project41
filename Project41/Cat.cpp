#include "Cat.h"

Cat::Cat()
{
	name = "Cat";
}

Cat::Cat(string n):Animal(n)
{
	name = "Cat";
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}
