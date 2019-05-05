#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>
#include <string>
#include "Alive.h"
using namespace std;

class Dog : public Animal
{
protected:
	string breed;
	string size;
public:
	Dog();
	Dog(string g, string e, string m, string s, string gen, string ea, string n, string br, string si);
	Dog(const Dog &obj);
	friend ostream& operator<<(ostream& out, const Dog &obj);
	friend istream& operator>>(istream& in, Dog &obj);
};

class Cat : public Animal
{
protected:
	string breed;
	bool like_water;
public:
	Cat();
	Cat(string g, string e, string m, string s, string gen, string ea, string n, string br, bool l);
	Cat(const Cat &obj);
	friend ostream& operator<<(ostream& out, const Cat &obj);
	friend istream& operator>>(istream& in, Cat &obj);
};

#endif // ANIMAL_H_INCLUDED
