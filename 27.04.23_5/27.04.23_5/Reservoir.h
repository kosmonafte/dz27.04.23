#pragma once
#include <string.h>
#include <string>
using namespace std;
class Reservoir
{
private:
	char* name;
	int width;
	int length;
	int depth;
	int type;
public:
	Reservoir(const char* name, int width, int length, int depth, int type) {
		if (name) {
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		this->width = width;
		this->length = length;
		this->depth = depth;
		this->type = type;
	}
	Reservoir() :Reservoir("Дельфин", 10, 20, 2, 0) {};
	Reservoir(const Reservoir& reservoir) {
		if (reservoir.name) {
			this->name = new char[strlen(reservoir.name) + 1];
			strcpy_s(this->name, strlen(reservoir.name) + 1, reservoir.name);
		}
		else {
			this->name = new char[5];
			strcpy_s(this->name, 5, "name");
		}
		this->width = reservoir.width;
		this->length = reservoir.length;
		this->depth = reservoir.depth;
		this->type = reservoir.type;
	}
	~Reservoir() {
		if (this->name) {
			delete[]this->name;
		}
	}
	string getInfo();
	long long square();
	long long volume();
	bool checkType(Reservoir reservoir);
	bool iMore(Reservoir reservoir);
};

