#include "House.h"

void House::printHouseInfo()
{
	std::cout << "House number - " << this->number << std::endl;
	std::cout << "House street - " << this->address << std::endl;
	std::cout << "Apartments - " << this->size << std::endl;
	for (int i = 0; i < size; i++) {
		this->apartments[i].humansInfo();
	}
}
