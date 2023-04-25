// dz27.04.23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Human.h"
#include "Apartment.h"
using namespace std;
int main()
{
	Human* test = new Human[3];
	cout << test[0].getName();
	cout << test[1].getName();
	cout << test[2].getName();
	Human human("hojuhjz", true, "+44444444444");
	cout << human.getName();
	Apartment apart(1, test, 3);
	cout << apart.getNumber();
	cout << apart.getHuman(0).getName();
	cout << apart.getHuman(1).getName();
	cout << apart.getHuman(2).getName();
	apart.getHuman(1).setName("Sasha");
	cout << apart.getHuman(0).getName();
	cout << apart.getHuman(1).getName();
	cout << apart.getHuman(2).getName();
	cout << apart.getSize();
	apart.addHuman(human);
	cout << apart.getHuman(3).getName();
	cout << apart.getHuman(3).getTelNumber();
	cout << apart.getSize();
	apart.getHuman(3).setName("tetsttst");
	cout << apart.getHuman(3).getName();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
