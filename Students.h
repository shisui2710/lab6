#ifndef STUDENTS_H_INCLUDED
#define STUDENTS_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	string name, surname, group;
	int age;
	bool exp;
public:
	Student();
	Student(string n, string s, string g, int a, bool e)
		: name(n), surname(s), group(g), age(a), exp(e) {};
	Student(const Student &obj);
	friend ostream& operator<<(ostream& out, const Student &obj);
	friend istream& operator>>(istream& in, Student &obj);
};





class Starosta : public Student
{
protected:
	string email, phone;
public:
	Starosta();
	Starosta(string n, string s, string g, int a, bool e, string em, string ph);
	Starosta(const Starosta &obj);
	friend ostream& operator<<(ostream& out, const Starosta &obj);
	friend istream& operator>>(istream& in, Starosta &obj);
};

#endif // STUDENTS_H_INCLUDED
