#include "Apartment.h"

void Apartment::addHuman(Human human)
{
	Human* hum = new Human[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		hum[i] = this->humans[i];
	}
	hum[this->size] = human;
	delete[]this->humans;
	this->humans = hum;
	this->size++;
}

int Apartment::getNumber()
{
	return this->number;
}

int Apartment::getSize()
{
	return this->size;
}

Human& Apartment::getHuman(int index)
{
	return this->humans[index];	
}
