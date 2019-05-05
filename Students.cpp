#include <iostream>
#include <string>
#include "Students.h"
using namespace std;

Student::Student()
{
	name = "������";
	surname = "������";
	group = "����-01-18";
	age = 18;
	exp = false;
}

Student::Student(const Student &obj)
{
	name = obj.name;
	surname = obj.surname;
	group = obj.group;
	age = obj.age;
	exp = obj.exp;
}

ostream& operator<< (ostream& out, const Student &obj)
{
	out << "�������:" << endl;
	out << "���: " << obj.name << endl;
	out << "�������: " << obj.surname << endl;
	out << "������: " << obj.group << endl;
	out << "�������: " << obj.age << endl;
	out << "����� �����?: " << obj.exp << endl;
	return out;
}

istream& operator>> (istream& in, Student &obj)
{
	cout << "������� ������ � ��������:" << endl;
	cout << "���: ";
	in >> obj.name;
	cout << "�������: ";
	in >> obj.surname;
	cout << "������: ";
	in >> obj.group;
	cout << "�������: ";
	in >> obj.age;
	cout << "����� �����?: ";
	in >> obj.exp;
	return in;
}





Starosta::Starosta()
{
	Student();
	phone = "79998900772";
	email = "holyhero2710@icloud.com";
}

Starosta::Starosta(string n, string s, string g, int a, bool e, string em, string ph)
{
	Student(n, s, g, a, e);
	email = em;
	phone = ph;
};

Starosta::Starosta(const Starosta &obj)
{
	name = obj.name;
	surname = obj.surname;
	group = obj.group;
	age = obj.age;
	exp = obj.exp;
	phone = obj.phone;
	email = obj.email;
}

ostream& operator<< (ostream& out, const Starosta &obj)
{
	out << "��������:" << endl;
	out << "���: " << obj.name << endl;
	out << "�������: " << obj.surname << endl;
	out << "������: " << obj.group << endl;
	out << "�������: " << obj.age << endl;
	out << "����� �����?: " << obj.exp << endl;
	out << "����� ��������: " << obj.phone << endl;
	out << "����������� �����: " << obj.email << endl;
	return out;
}

istream& operator>> (istream& in, Starosta &obj)
{
	cout << "������� ������ � ��������:" << endl;
	cout << "���: ";
	in >> obj.name;
	cout << "�������: ";
	in >> obj.surname;
	cout << "������: ";
	in >> obj.group;
	cout << "�������: ";
	in >> obj.age;
	cout << "����� �����?: ";
	in >> obj.exp;
	cout << "����� ��������: ";
	in >> obj.phone;
	cout << "����������� �����: ";
	in >> obj.email;
	return in;
}
