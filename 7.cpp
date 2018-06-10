#include "stdafx.h"
#include "iostream"
#include "clocale"
using namespace std;

class Animals
{
protected:
	string name;
public:
	Animals(string name): name (name)
	{};
	virtual void prisvaivanie() = 0;
};

class Animal : public Animals
{
public:
	Animal(string name) : Animals(name) {}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout << "Животное или птица: " << "может иметь уши, лапы, хвост, шерсть, усы, клюв, перья" << endl;
	}
};

class Cat : public Animals
{
public:
	Cat (string name): Animals(name){}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"Кот: "<< "имеет уши, лапы, хвост, шерсть и усы" << endl;
	}
};

class Dog : public Animals
{
public:
	Dog (string name) : Animals(name) {}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"Собака: " << "имеет уши, лапы, хвост, шерсть" << endl;
	}
};

class Parrot : public Animals
{
public:
	Parrot(string name) : Animals(name) {}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"Попугай: "<< "имеет уши, лапки, перья, клюв" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Animals *animals[4]
	{
		new Animal("Животное или птица"),
		new Cat("Кот"),
		new Dog("Собака"),
		new Parrot("Попугай")
	};

	for (int i = 0; i < 4; i++)
	{
		animals[i]->prisvaivanie();
	}
	system("pause");
    return 0;
}
