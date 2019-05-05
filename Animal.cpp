#include <iostream>
#include <string>
#include "Alive.h"
#include "Animal.h"
using namespace std;

Dog::Dog()
{
	Animal();
	breed = "Хаски";
	size = "Большой";
}

Dog::Dog(string d, string e, string m, string s, string g, string ea, string n, string br, string si)
{
	Animal(d, e, m, s, g, ea, n);
	breed = br;
	size = si;
}

Dog::Dog(const Dog &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
	spc = obj.spc;
	gen = obj.gen;
	eat = obj.eat;
	areal = obj.areal;
	breed = obj.breed;
	size = obj.size;
}

ostream& operator<<(ostream& out, const Dog &obj)
{
	out << "Собака:" << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	out << "Вид: " << obj.spc << endl;
	out << "Пол: " << obj.gen << endl;
	out << "Пища: " << obj.eat << endl;
	out << "Максимальный возраст в неволе: " << obj.areal << endl;
	out << "Порода: " << obj.breed << endl;
	out << "Размер: " << obj.size << endl;
	return out;
}

istream& operator>>(istream& in, Dog &obj)
{
	cout << "Введите данные о собаке:" << endl;
	cout << "Геном: ";
	in >> obj.dna;
	cout << "Среда обитания: ";
	in >> obj.env;
	cout << "Способ передвижения: ";
	in >> obj.mov;
	cout << "Вид: ";
	in >> obj.spc;
	cout << "Пол: ";
	in >> obj.gen;
	cout << "Пища: ";
	in >> obj.eat;
	cout << "Максимальный возраст в неволе: ";
	in >> obj.areal;
	cout << "Порода: ";
	in >> obj.breed;
	cout << "Размер: ";
	in >> obj.size;
	return in;
}





Cat::Cat()
{
	Animal();
	breed = "Персидсий";
	like_water = true;
}

Cat::Cat(string d, string e, string m, string s, string g, string ea, string n, string br, bool l)
{
	Animal(g, e, m, s, gen, ea, n);
	breed = br;
	like_water = l;
}

Cat::Cat(const Cat &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
	spc = obj.spc;
	gen = obj.gen;
	eat = obj.eat;
	areal = obj.areal;
	breed = obj.breed;
	like_water = obj.like_water;
}

ostream& operator<<(ostream& out, const Cat &obj)
{
	out << "Кошка:" << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	out << "Вид: " << obj.spc << endl;
	out << "Пол: " << obj.gen << endl;
	out << "Пища: " << obj.eat << endl;
	out << "Среда обитания: " << obj.areal << endl;
	out << "Порода: " << obj.breed << endl;
	out << "Любит воду?: " << obj.like_water << endl;
	return out;
}

istream& operator>>(istream& in, Cat &obj)
{
	cout << "Введите данные о кошке:" << endl;
	cout << "Геном: ";
	in >> obj.dna;
	cout << "Среда обитания: ";
	in >> obj.env;
	cout << "Способ передвижения: ";
	in >> obj.mov;
	cout << "Вид: ";
	in >> obj.spc;
	cout << "Пол: ";
	in >> obj.gen;
	cout << "Пища: ";
	in >> obj.eat;
	cout << "Среда обитания: ";
	in >> obj.areal;
	cout << "Порода: ";
	in >> obj.breed;
	cout << "Любит воду?: ";
	in >> obj.like_water;
	return in;
}
