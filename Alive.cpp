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
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	return out;
}

istream& operator>>(istream& in, Alive &obj)
{
	cout << "Input alive:" << endl;
	cout << "�����: ";
	in >> obj.dna;
	cout << "����� ��������: ";
	in >> obj.env;
	cout << "������ ������������: ";
	in >> obj.mov;
	return in;
}





Bird::Bird()
{
	Alive();
	spc = "����";
	gen = "�";
	eat = "������ ��������";
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
	out << "   �����:" << endl;
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	out << "���: " << obj.spc << endl;
	out << "���: " << obj.gen << endl;
	out << "����: " << obj.eat << endl;
	out << "������ �����: " << obj.high << endl;
	return out;
}

istream& operator>>(istream& in, Bird &obj)
{
	cout << "������� ������ � �����:" << endl;
	cout << "�����: " << endl;
	in >> obj.dna;
	cout << "����� ��������: " << endl;
	in >> obj.env;
	cout << "������ ������������: " << endl;
	in >> obj.mov;
	cout << "���: " << endl;
	in >> obj.spc;
	cout << "���: " << endl;
	in >> obj.gen;
	cout << "����: " << endl;
	in >> obj.eat;
	cout << "������ �����: " << endl;
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
	out << "����: " << endl;
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	out << "���: " << obj.spc << endl;
	out << "���: " << obj.gen << endl;
	out << "����: " << obj.eat << endl;
	out << "������� ��������: " << obj.depth << endl;
	return out;
}

istream& operator>>(istream& in, Fish &obj)
{
	cout << "������� ������ � ����:" << endl;
	cout << "�����: ";
	in >> obj.dna;
	cout << "����� ��������: ";
	in >> obj.env;
	cout << "������ ������������: ";
	in >> obj.mov;
	cout << "���: ";
	in >> obj.spc;
	cout << "���: ";
	in >> obj.gen;
	cout << "����: ";
	in >> obj.eat;
	cout << "������� ��������: ";
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
	out << "��������:" << endl;
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	out << "���: " << obj.spc << endl;
	out << "���: " << obj.gen << endl;
	out << "����: " << obj.eat << endl;
	out << "������������ ������� � ������������ �����: " << obj.areal << endl;
	return out;
}

istream& operator>>(istream& in, Animal &obj)
{
	cout << "Input animal:" << endl;
	cout << "�����: ";
	in >> obj.dna;
	cout << "����� ��������: ";
	in >> obj.env;
	cout << "������ ������������: ";
	in >> obj.mov;
	cout << "���: ";
	in >> obj.spc;
	cout << "���: ";
	in >> obj.gen;
	cout << "����: ";
	in >> obj.eat;
	cout << "������������ ������� � ������������ �����: ";
	in >> obj.areal;
	return in;
}
