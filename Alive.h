#ifndef ALIVE_H_INCLUDED
#define ALIVE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Alive
{
protected:
	string dna;
	string env;
	string mov;
public:
	Alive();
	Alive(string d, string e, string m)
		: dna(d), env(e), mov(m) {};
	Alive(const Alive &obj);
	friend ostream& operator<<(ostream& out, const Alive &obj);
	friend istream& operator>>(istream& in, Alive &obj);
};



class Bird : public Alive
{
protected:
	string spc;
	string gen;
	string eat;
	int high;
public:
	Bird();
	Bird(string d, string e, string m, string s, string g, string ea, int f);
	Bird(const Bird &obj);
	friend ostream& operator<<(ostream& out, const Bird &obj);
	friend istream& operator>>(istream& in, Bird &obj);
};



class Fish : public Alive
{
protected:
	string spc;
	string gen;
	string eat;
	int depth;
public:
	Fish();
	Fish(string d, string e, string m, string s, string g, string ea, int de);
	Fish(const Fish &obj);
	friend ostream& operator<<(ostream& out, const Fish &obj);
	friend istream& operator>>(istream& in, Fish &obj);
};



class Animal : public Alive
{
protected:
	string spc;
	string gen;
	string eat;
	string areal;
public:
	Animal();
	Animal(string d, string e, string m, string s, string g, string ea, string a);
	Animal(const Animal &obj);
	friend ostream& operator<<(ostream& out, const Animal &obj);
	friend istream& operator>>(istream& in, Animal &obj);
};

#endif // ALIVE_H_INCLUDED
