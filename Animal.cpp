#include <iostream>
#include <string>
#include "Alive.h"
#include "Animal.h"
using namespace std;

Dog::Dog()
{
	Animal();
	breed = "�����";
	size = "�������";
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
	out << "������:" << endl;
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	out << "���: " << obj.spc << endl;
	out << "���: " << obj.gen << endl;
	out << "����: " << obj.eat << endl;
	out << "������������ ������� � ������: " << obj.areal << endl;
	out << "������: " << obj.breed << endl;
	out << "������: " << obj.size << endl;
	return out;
}

istream& operator>>(istream& in, Dog &obj)
{
	cout << "������� ������ � ������:" << endl;
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
	cout << "������������ ������� � ������: ";
	in >> obj.areal;
	cout << "������: ";
	in >> obj.breed;
	cout << "������: ";
	in >> obj.size;
	return in;
}





Cat::Cat()
{
	Animal();
	breed = "���������";
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
	out << "�����:" << endl;
	out << "�����: " << obj.dna << endl;
	out << "����� ��������: " << obj.env << endl;
	out << "������ ������������: " << obj.mov << endl;
	out << "���: " << obj.spc << endl;
	out << "���: " << obj.gen << endl;
	out << "����: " << obj.eat << endl;
	out << "����� ��������: " << obj.areal << endl;
	out << "������: " << obj.breed << endl;
	out << "����� ����?: " << obj.like_water << endl;
	return out;
}

istream& operator>>(istream& in, Cat &obj)
{
	cout << "������� ������ � �����:" << endl;
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
	cout << "����� ��������: ";
	in >> obj.areal;
	cout << "������: ";
	in >> obj.breed;
	cout << "����� ����?: ";
	in >> obj.like_water;
	return in;
}
