#include "Apartment.h"

std::string Apartment::getApartmentInfo()
{
	std::string str;
	str.append("---------------------");
	str.append("\n");
	str.append("Номер квартиры - ");
	str.append(std::to_string(this->number));
	str.append("\n");
	str.append("Всего проживающих - ");
	str.append(std::to_string(this->size));
	str.append("\n");
	str.append("Проживающие: ");
	str.append("\n");
	for (int i = 0; i < this->size; i++) {
		str.append(this->humans[i].getName());
		str.append(" ");
		(this->humans[i].getMan()) ? str.append("Man") : str.append("Woman");
		str.append(" ");
		str.append(this->humans[i].getTelNumber());
		str.append("\n");
	}
	
	return str;
}

void Apartment::addHuman(Human human)
{
	Human* hum = new Human[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		hum[i].setName(humans[i].getName());
		hum[i].setMan(humans[i].getMan());
		hum[i].setTelNumber(humans[i].getTelNumber());
	}
	hum[this->size].setName(human.getName());
	hum[this->size].setMan(human.getMan());
	hum[this->size].setTelNumber(human.getTelNumber());
	delete[]this->humans;
	this->humans = hum;
	this->size++;
}

void Apartment::delHuman(int index) {
	Human* hum = new Human[this->size - 1];
	for (int i = 0; i < index - 1; i++) {
		hum[i].setName(humans[i].getName());
		hum[i].setMan(humans[i].getMan());
		hum[i].setTelNumber(humans[i].getTelNumber());
	}
	for (int i = index; i < this->size; i++) {
		hum[i - 1].setName(humans[i].getName());
		hum[i - 1].setMan(humans[i].getMan());
		hum[i - 1].setTelNumber(humans[i].getTelNumber());
	}
	delete[]this->humans;
	this->humans = hum;
	this->size--;
}

void Apartment::setNumber(int id)
{
	this->number = id;
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

void Apartment::humansInfo()
{
	for (int i = 0; i < this->size; i++) {
		this->humans[i].printInfo();
	}
}
