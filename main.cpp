#include <iostream>
#include <string>
#include "Students.h"
#include "Alive.h"
#include "Animal.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int choise;
	cout << "Для работы с классом Student введите 1" << endl;
	cout << "Для работы с классом Alive введите 2" << endl;
	cout << "Для работы с классом Animal введите 3" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
        {
            Student stud[5];
            for (int k = 0; k < 5; k++)
                cin >> stud[k];
            Starosta st;
            cin >> st;
            for (int k = 0; k < 5; k++)
                cout << stud[k];
            cout << st;
            break;
        }
	case 2:
        {
            Alive alive;
            Bird bird;
            Fish fish;
            Animal animal;
            cin >> alive;
            cin >> bird;
            cin >> fish;
            cin >> animal;
            cout << alive;
            cout << bird;
            cout << fish;
            cout << animal;
            break;
        }
	case 3:
        {
            Animal animal;
            Dog dog;
            Cat cat;
            cin >> animal;
            cin >> dog;
            cin >> cat;
            cout << animal;
            cout << dog;
            cout << cat;
        }
	}


}
