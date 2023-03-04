#include "Vin.h"
#include <iostream>
Snack::Snack(char *myName)
{
		this->nameModule = myName;//Реализация конструктора
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::~Snack()
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//Реализация деструктора
}

SnackSlot::SnackSlot(int count)
{
	this->countModule=count;
	std::cout << "coutModule = " << countModule << std::endl;
	std::cout << "This is constructor SnackSlot of object, adress =   "<<this << std::endl;
}
SnackSlot::~SnackSlot()
{
	std::cout << "This is destructor SnackSlot of object, adress = "<<this<<std::endl;
}