#include<iostream>
using namespace std;
#include "Animal.h"
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"

class Transport
{
protected:
	string model;
	int speed;
public:
	Transport() { model = "MODEL_TRANSPORT"; speed = 0; }
	Transport(string m, int s) { model = m; speed = s;}
	virtual void move() const = 0;
};

class Car : public Transport
{
public:
	Car() { model = "MODEL_Car";speed = 0;  }
	Car(string m, int s) :Transport(m, s) {};
	void move()const { cout << model << " car move with speed: " << speed << endl; }
};

class Airplane : public Transport
{
public:
	Airplane() { model = "MODEL_Airplane"; speed = 0; }
	Airplane(string m, int s) :Transport(m, s) {};
	void move()const { cout << model << " airplane move with speed: " << speed << endl; }
};

class Bicycle : public Transport
{
public:
	Bicycle() { model = "MODEL_Bicycle"; speed = 0; }
	Bicycle(string m, int s) :Transport(m, s) {};
	void move()const { cout << model << " bicycle move with speed: " << speed << endl; }
};



class Employee
{
protected:
	int salary;
public:
	Employee() { salary = 0; }
	Employee(int s) { salary = s; }
	virtual void calculateSalary() const = 0;
};

class Manager : public Employee
{
public:
	Manager() :Employee() {}
	Manager( int s) :Employee( s) {};
	void calculateSalary()const { cout << "Managers salary: " << salary * 2 << endl; }
};

class Developer : public Employee
{
public:
	Developer() :Employee() {}
	Developer(int s) :Employee(s) {};
	void calculateSalary()const { cout << "Developers salary: " << salary * 4 << endl; }
};

class Intern : public Employee
{
public:
	Intern() :Employee() {}
	Intern(int s) :Employee(s) {};
	void calculateSalary()const { cout << "Interns salary: " << salary * 5 << endl; }
};





class PaymentMethod
{
protected:
	int allAmount;
public:
	PaymentMethod() { allAmount = 0; }
	PaymentMethod(int a) { allAmount = a; }
	virtual void pay(int a) = 0;
};

class CreditCard : public PaymentMethod
{
public:
	CreditCard() :PaymentMethod() {}
	CreditCard(int a) :PaymentMethod(a) {};
	void pay(int a) { allAmount -= a; cout << "You pay: " << a << "\nCreditCard allAmount: " << allAmount << endl; }
};

class PayPal : public PaymentMethod
{
public:
	PayPal() :PaymentMethod() {}
	PayPal(int a) :PaymentMethod(a) {};
	void pay(int a) { allAmount -= a; cout << "You pay: " << a << "\PayPal allAmount: " << allAmount << endl; }
};

class CryptoWallet : public PaymentMethod
{
public:
	CryptoWallet() :PaymentMethod() {}
	CryptoWallet(int a) :PaymentMethod(a) {};
	void pay(int a) { allAmount -= a; cout << "You pay: " << a << "\CryptoWallet allAmount: " << allAmount << endl; }
};




class Device
{
protected:
	bool isOn;
public:
	Device() { isOn = 0; }
	Device(bool a) { isOn = a; }
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
};

class Smartphone : public Device
{
public:
	Smartphone() :Device() {}
	Smartphone(bool a) :Device(a) {};
	void turnOn() { isOn = 1; cout << "Smartphone ON" << endl; }
	void turnOff() { isOn = 0; cout << "Smartphone OFF" << endl; }
};

class Laptop : public Device
{
public:
	Laptop() :Device() {}
	Laptop(bool a) :Device(a) {};
	void turnOn() { isOn = 1; cout << "Laptop ON" << endl; }
	void turnOff() { isOn = 0; cout << "Laptop OFF" << endl; }
};

class TV : public Device
{
public:
	TV() :Device() {}
	TV(bool a) :Device(a) {};
	void turnOn() { isOn = 1; cout << "TV ON" << endl; }
	void turnOff() { isOn = 0; cout << "TV OFF" << endl; }
};



int main() {

	Animal* a[3];
	Transport* t[3];
	Employee* e[3];
	PaymentMethod* p[3];
	Device* d[3];


	a[0] = new Dog;
	a[1] = new Cat;
	a[2] = new Bird;

	t[0] = new Bicycle;
	t[1] = new Airplane;
	t[2] = new Car;

	e[0] = new Manager(1000);
	e[1] = new Developer(1000);
	e[2] = new Intern(1000);

	p[0] = new CreditCard(900);
	p[1] = new PayPal(7020);
	p[2] = new CryptoWallet(500);

	d[0] = new Smartphone;
	d[1] = new Laptop;
	d[2] = new TV;


	for (int i = 0; i < 3; i++) {
		a[i]->makeSound();
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		t[i]->move();
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		e[i]->calculateSalary();
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		p[i]->pay(100);
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		d[i]->turnOn();
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		d[i]->turnOff();
	}

	for (int i = 0; i < 3; i++) {
		delete a[i];
		delete t[i];
		delete e[i];
		delete p[i];
		delete d[i];
	}

	return 0;
}