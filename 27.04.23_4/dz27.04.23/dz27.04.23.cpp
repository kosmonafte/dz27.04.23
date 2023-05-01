// dz27.04.23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Human.h"
#include "Apartment.h"
#include "House.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Apartment* aparts = new Apartment[3];
	House house("Первомайский проспект", 10, aparts, 3);
	house.getApartments(0).setNumber(213);
	house.getApartments(1).setNumber(456);
	house.getApartments(2).setNumber(700);
	house.getApartments(0).getHuman(0).setName("Тестерович");
	house.getApartments(0).getHuman(0).setMan(true);
	house.getApartments(0).getHuman(1).setName("Тестеровская");
	house.getApartments(0).getHuman(1).setTelNumber("+71234445566");
	house.getApartments(1).addHuman({ "testName", true, "+78881234455" });
	house.getApartments(1).addHuman({ "testName222", false, "+70001119988" });
	house.getApartments(2).delHuman(1);
	house.getApartments(2).getHuman(0).setName("Тестикова");
	cout << house.houseInfo();
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
