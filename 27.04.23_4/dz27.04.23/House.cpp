#include "House.h"

std::string House::houseInfo()
{
	std::string str;
	str.append("����� ���� - ");
	str.append(std::to_string(this->number));
	str.append("\n");
	str.append("����� - ");
	str.append(this->address);
	str.append("\n");
	str.append("���������� ������� - ");
	str.append(std::to_string(this->size));
	str.append("\n");
	for (int i = 0; i < size; i++) {
		str.append(this->apartments[i].getApartmentInfo());
	}
	return str;
}

Apartment& House::getApartments(int index)
{
	return this->apartments[index];
}
