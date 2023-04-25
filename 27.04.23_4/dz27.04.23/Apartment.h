#pragma once
#include "Human.h"
class Apartment
{
private:
	int number;
	int size;
	Human* humans;
public:
	Apartment(int number, Human* humans, int size) {
		this->number = number;
		this->size = size;
		this->humans = new Human[size];
		for (int i = 0; i < size; i++) {
			this->humans[i] = humans[i];
		}
	}
	//Apartment(int number) :Apartment(number, {"Hozyain", true, "+71112223344"}, 0) {};
	Apartment(const Apartment& apartment) {
		this->humans = new Human[apartment.size];
		for (int i = 0; i < apartment.size; i++) {
			this->humans[i] = apartment.humans[i];
		}
		this->number = apartment.number;
		this->size = apartment.size;
	}
	/*~Apartment() {
		if (this->humans) {
			delete[]this->humans;
		}
	}*/
	void addHuman(Human human);
	int getNumber();
	int getSize();
	Human& getHuman(int index);
};

