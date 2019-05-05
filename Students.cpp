#include <iostream>
#include <string>
#include "Students.h"
using namespace std;

Student::Student()
{
	name = "Никита";
	surname = "Белуга";
	group = "Икбо-01-18";
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
	out << "Студент:" << endl;
	out << "Имя: " << obj.name << endl;
	out << "Фамилия: " << obj.surname << endl;
	out << "Группа: " << obj.group << endl;
	out << "Возраст: " << obj.age << endl;
	out << "Имеет долги?: " << obj.exp << endl;
	return out;
}

istream& operator>> (istream& in, Student &obj)
{
	cout << "Введите данные о студенте:" << endl;
	cout << "Имя: ";
	in >> obj.name;
	cout << "Фамилия: ";
	in >> obj.surname;
	cout << "Группа: ";
	in >> obj.group;
	cout << "Возраст: ";
	in >> obj.age;
	cout << "Имеет долги?: ";
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
	out << "Староста:" << endl;
	out << "Имя: " << obj.name << endl;
	out << "Фамилия: " << obj.surname << endl;
	out << "Группа: " << obj.group << endl;
	out << "Возраст: " << obj.age << endl;
	out << "Имеет долги?: " << obj.exp << endl;
	out << "Номер телефона: " << obj.phone << endl;
	out << "Электронная почта: " << obj.email << endl;
	return out;
}

istream& operator>> (istream& in, Starosta &obj)
{
	cout << "Введите данные о старосте:" << endl;
	cout << "Имя: ";
	in >> obj.name;
	cout << "Фамилия: ";
	in >> obj.surname;
	cout << "Группа: ";
	in >> obj.group;
	cout << "Возраст: ";
	in >> obj.age;
	cout << "Имеет долги?: ";
	in >> obj.exp;
	cout << "Номер телефона: ";
	in >> obj.phone;
	cout << "Электронная почта: ";
	in >> obj.email;
	return in;
}
