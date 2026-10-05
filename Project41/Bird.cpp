#include "Bird.h"

Bird::Bird()
{
	name = "Bird";
}

Bird::Bird(string n) :Animal(n)
{
	name = "Bird";
}

void Bird::makeSound() const
{
	cout << "Chiric" << endl;
}