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
		cout << "�������� ��� �����: " << "����� ����� ���, ����, �����, ������, ���, ����, �����" << endl;
	}
};

class Cat : public Animals
{
public:
	Cat (string name): Animals(name){}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"���: "<< "����� ���, ����, �����, ������ � ���" << endl;
	}
};

class Dog : public Animals
{
public:
	Dog (string name) : Animals(name) {}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"������: " << "����� ���, ����, �����, ������" << endl;
	}
};

class Parrot : public Animals
{
public:
	Parrot(string name) : Animals(name) {}
	void prisvaivanie()
	{
		setlocale(LC_ALL, "rus");
		cout <<"�������: "<< "����� ���, �����, �����, ����" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Animals *animals[4]
	{
		new Animal("�������� ��� �����"),
		new Cat("���"),
		new Dog("������"),
		new Parrot("�������")
	};

	for (int i = 0; i < 4; i++)
	{
		animals[i]->prisvaivanie();
	}
	system("pause");
    return 0;
}
