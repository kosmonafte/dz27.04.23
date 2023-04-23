// dz27.04.23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Human.h"
using namespace std;
int main()
{
	Human hum("Sasha", true, "+79991112233");
	cout << hum.getName() << endl;
	cout << hum.getMan() << endl;
	cout << hum.getTelNumber() << endl;
	cout << "--------------------------" << endl;
	Human hum2(hum);
	Human hum3 = hum;
	hum.setName("SashaSasha");
	hum.setTelNumber("+71234567890");
	cout << hum.getName() << endl;
	cout << hum.getMan() << endl;
	cout << hum.getTelNumber() << endl;
	cout << "--------------------------" << endl;
	cout << hum2.getName() << endl;
	cout << hum2.getMan() << endl;
	cout << hum2.getTelNumber() << endl;
	char* name2 = new char[100];
	cin >> name2;
	hum2.setName(name2);
	cout << "--------------------------" << endl;
	cout << hum2.getName() << endl;
	cout << hum2.getMan() << endl;
	cout << hum2.getTelNumber() << endl;
	cout << "--------------------------" << endl;
	cout << hum3.getName() << endl;
	cout << hum3.getMan() << endl;
	cout << hum3.getTelNumber() << endl;
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
