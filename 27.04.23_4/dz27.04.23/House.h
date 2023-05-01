#pragma once
#include "Apartment.h"
#include <string.h>
class House
{
private:
	char* address;
	int number;
	Apartment* apartments;
	int size;
public:
	House(const char* address, int number, Apartment* apartments, int size) {
		this->address = new char[strlen(address) + 1];
		strcpy_s(this->address, strlen(address) + 1, address);
		this->number = number;
		this->size = size;
		this->apartments = new Apartment[size];
		for (int i = 0; i < size; i++) {
			this->apartments[i] = apartments[i];
		}
	}
	House() {
		this->address = new char[8];
		strcpy_s(this->address, 8, "address");
		this->number = 1000;
		this->size = 2;
		this->apartments = new Apartment[2];
		for (int i = 0; i < 2; i++) {
			this->apartments[i] = apartments[i];
		}
	}
	House(const House& house) {
		this->address = new char[strlen(house.address) + 1];
		strcpy_s(this->address, strlen(house.address) + 1, house.address);
		this->number = house.number;
		this->size = house.size;
		this->apartments = new Apartment[size];
		for (int i = 0; i < house.size; i++) {
			this->apartments[i] = house.apartments[i];
		}
	}
	~House() {
		if (this->address) {
			delete[]this->address;
		}
		if (this->apartments) {
			delete[]this->apartments;
		}
	}
	std::string houseInfo();
	Apartment& getApartments(int index);
};

