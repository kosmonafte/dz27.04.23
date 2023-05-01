#pragma once
#include <string.h>
#include <iostream>
class Human
{
private:
	char* name;
	bool man;
	char telNumber[13];
public:
	Human(const char* name, bool man, const char telNumber[]) {
		this->name = new char[strlen(name) + 1];
		for (int i = 0; i < strlen(name); i++) {
			this->name[i] = name[i];
		}
		this->name[strlen(name)] = '\0';
		this->man = man;
		if (strlen(telNumber) == 12) {
			for (int i = 0; i < 12; i++) {
				this->telNumber[i] = telNumber[i];
			}
			this->telNumber[12] = '\0';
		}
		else {
			for (int i = 0; i < 12; i++) {
				this->telNumber[i] = '*';
			}
			std::cout << "Телефон введен не корректно";
		}
	}
	Human(char* name, bool man) :Human(name, man, "************") {};
	Human(char* name) :Human(name, true, "************") {};
	Human() :Human("Tester", true, "************") {};
	Human(const Human &human) {
		if (human.name) {
			this->name = new char[strlen(human.name) + 1];
			for (int i = 0; i < strlen(human.name); i++) {
				this->name[i] = human.name[i];
			}
			this->name[strlen(human.name)] = '\0';
		}
		this->man = human.man;
		for (int i = 0; i < 12; i++) {
			this->telNumber[i] = human.telNumber[i];
		}
		this->telNumber[12] = '\0';
	}
	~Human() {
		if (this->name) {
			delete[]this->name;
		}
	}
	void setName(const char* name) {
		delete[]this->name;
		this->name = new char[strlen(name) + 1];
		for (int i = 0; i < strlen(name); i++) {
			this->name[i] = name[i];
		}
		this->name[strlen(name)] = '\0';
	}
	void setMan(bool man) {
		this->man = man;
	}
	int setTelNumber(const char tel[]) {
		if (strlen(tel) == 12) {
			for (int i = 0; i < 12; i++) {
				this->telNumber[i] = tel[i];
			}
			this->telNumber[12] = '\0';
			return 0;
		}
		else {
			return 1;
		}
	}
	char* getName() {
		return this->name;
	}
	bool getMan() {
		return this->man;
	}
	char* getTelNumber() {
		return this->telNumber;
	}
	void printInfo() {
		std::cout << this->name << std::endl;
		(this->man) ? std::cout << "Man": std::cout << "Woman"; 
		std::cout << std::endl;
		std::cout << this->telNumber << std::endl;
	}
};

