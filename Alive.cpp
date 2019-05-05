#include <iostream>
#include <string>
#include "Alive.h"

Alive::Alive()
{
	dna = "Bird";
	env = "Air";
	mov = "Fly";
}

Alive::Alive(const Alive &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
}

ostream& operator<<(ostream& out, const Alive &obj)
{
	out << "Alive:" << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда Обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	return out;
}

istream& operator>>(istream& in, Alive &obj)
{
	cout << "Input alive:" << endl;
	cout << "Геном: ";
	in >> obj.dna;
	cout << "Среда обитания: ";
	in >> obj.env;
	cout << "Способ передвижения: ";
	in >> obj.mov;
	return in;
}





Bird::Bird()
{
	Alive();
	spc = "Сова";
	gen = "М";
	eat = "Мелкие животные";
	high = 200;
}

Bird::Bird(string d, string e, string m, string s, string g, string ea, int f)
{
	Alive(s, e, m);
	spc = s;
	gen = g;
	eat = e;
	high = f;
}

Bird::Bird(const Bird &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
	spc = obj.spc;
	gen = obj.gen;
	eat = obj.eat;
	high = obj.high;
}

ostream& operator<<(ostream& out, const Bird &obj)
{
	out << "   Птица:" << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	out << "Вид: " << obj.spc << endl;
	out << "Пол: " << obj.gen << endl;
	out << "Пища: " << obj.eat << endl;
	out << "Высота полёта: " << obj.high << endl;
	return out;
}

istream& operator>>(istream& in, Bird &obj)
{
	cout << "Введите данные о птице:" << endl;
	cout << "Геном: " << endl;
	in >> obj.dna;
	cout << "Среда обитания: " << endl;
	in >> obj.env;
	cout << "Способ передвижения: " << endl;
	in >> obj.mov;
	cout << "Вид: " << endl;
	in >> obj.spc;
	cout << "Пол: " << endl;
	in >> obj.gen;
	cout << "Пища: " << endl;
	in >> obj.eat;
	cout << "Высота полёта: " << endl;
	in >> obj.high;
	return in;
}





Fish::Fish()
{
	Alive();
	spc = "Shark";
	gen = "M";
	eat = "Fishes";
	depth = 500;
}

Fish::Fish(string d, string e, string m, string s, string g, string ea, int de)
{
	Alive(d, e, m);
	spc = s;
	gen = g;
	eat = e;
	depth = de;
}

Fish::Fish(const Fish &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
	spc = obj.spc;
	gen = obj.gen;
	eat = obj.eat;
	depth = obj.depth;
}

ostream& operator<<(ostream& out, const Fish &obj)
{
	out << "Рыба: " << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	out << "Вид: " << obj.spc << endl;
	out << "Пол: " << obj.gen << endl;
	out << "Пища: " << obj.eat << endl;
	out << "Глубина обитания: " << obj.depth << endl;
	return out;
}

istream& operator>>(istream& in, Fish &obj)
{
	cout << "Введите данные о рыбе:" << endl;
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
	cout << "Глубина обитания: ";
	in >> obj.depth;
	return in;
}





Animal::Animal()
{
	Alive();
	spc = "Goat";
	gen = "M";
	eat = "Straw";
	areal = 10;
}

Animal::Animal(string d, string e, string m, string s, string g, string ea, string n)
{
	Alive(d, e, m);
	spc = s;
	gen = g;
	eat = e;
	areal = n;
}

Animal::Animal(const Animal &obj)
{
	dna = obj.dna;
	env = obj.env;
	mov = obj.mov;
	spc = obj.spc;
	gen = obj.gen;
	eat = obj.eat;
	areal = obj.areal;
}

ostream& operator<<(ostream& out, const Animal &obj)
{
	out << "Животное:" << endl;
	out << "Геном: " << obj.dna << endl;
	out << "Среда обитания: " << obj.env << endl;
	out << "Способ передвижения: " << obj.mov << endl;
	out << "Вид: " << obj.spc << endl;
	out << "Пол: " << obj.gen << endl;
	out << "Пища: " << obj.eat << endl;
	out << "Максимальный возраст в естественной среде: " << obj.areal << endl;
	return out;
}

istream& operator>>(istream& in, Animal &obj)
{
	cout << "Input animal:" << endl;
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
	cout << "Максимальный возраст в естественной среде: ";
	in >> obj.areal;
	return in;
}
