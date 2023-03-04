#include "Vin.h"
#include <iostream>
Snack::Snack(char *name)
{
		this->nameModule = name;//Реализация конструктора
		std::cout << "This is constructor " << std::endl;
};
Snack::~Snack()
{
	std::cout << "This destructor " <<std:: endl;
}