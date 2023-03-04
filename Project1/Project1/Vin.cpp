#include "Vin.h"
#include <iostream>

Snack::Snack()
{
	this->nameModule = 0;//–еализаци€ конструктора
	this->countPower = 0;//Ёнергетическа€ ценность по умолчанию
	this->price = 0;//÷ена по умолчанию
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
}
Snack::Snack(char *snackName)
{
		this->nameModule = snackName;//–еализаци€ конструктора
		this->countPower = 0;//Ёнергетическа€ ценность по умолчанию
		this->price = 0;//÷ена по умолчанию
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::Snack(char *snackName, int snackPower)
{
	this->nameModule = snackName;//–еализаци€ конструктора
	this->countPower = snackPower;//Ёнергетическа€ ценность
	this->price = 0;//÷ена по умолчанию
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(char *snackName, int snackPower, int snackPrice)
{
	this->nameModule = snackName;//–еализаци€ конструктора
	this->countPower = snackPower;//Ёнергетическа€ ценность
	this->price = snackPrice;//÷ена 
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(const Snack& other)//конструктор копировани€
{
	std::cout << "Call the copy constructor " << std::endl;
}
Snack::~Snack()
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//–еализаци€ деструктора
}

SnackSlot::SnackSlot(int maxProduct)
{
	curentSnack = 0;
	this->maxProductModule = maxProduct;
	 pointSnack = new Snack*[maxProductModule];//—оздаем массив  из 10 обьекто снека
	for (int i = 0; i < maxProductModule; i++)
	{
		pointSnack[i] = new Snack("Emty");//—оздание пустых —некнов
	}
	std::cout << "This is constructor SnackSlot of object, adress =   "<<this << std::endl;
}
SnackSlot::~SnackSlot()
{
	std::cout << "This is destructor SnackSlot of object, adress = "<<this<<std::endl;
	for (int i = 0; i <maxProductModule; i++)
	{
		delete pointSnack[i];
	}
	delete[] pointSnack;
}

void SnackSlot::addSnack(Snack* object)
{

	if (this->curentSnack < this->maxProductModule)
	{
		 
		pointSnack[curentSnack]= object;
		++curentSnack;
	}
}