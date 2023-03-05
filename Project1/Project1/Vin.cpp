#include "Vin.h"
#include <iostream>

Snack::Snack()
{
	this->nameModule = 0;//Реализация конструктора
	this->countPower = 0;//Энергетическая ценность по умолчанию
	this->price = 0;//Цена по умолчанию
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
}
Snack::Snack(char *snackName)
{
		this->nameModule = snackName;//Реализация конструктора
		this->countPower = 0;//Энергетическая ценность по умолчанию
		this->price = 0;//Цена по умолчанию
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::Snack(char *snackName, int snackPower)
{
	this->nameModule = snackName;//Реализация конструктора
	this->countPower = snackPower;//Энергетическая ценность
	this->price = 0;//Цена по умолчанию
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(char *snackName, int snackPower, int snackPrice)
{
	this->nameModule = snackName;//Реализация конструктора
	this->countPower = snackPower;//Энергетическая ценность
	this->price = snackPrice;//Цена 
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(const Snack& other)//конструктор копирования
{
	std::cout << "Call the copy constructor " << std::endl;
}
Snack::~Snack()
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//Реализация деструктора
}

SnackSlot::SnackSlot(int maxProduct)
{
	curentSnack = 0;
	this->maxProductModule = maxProduct;
	 pointSnack = new Snack*[maxProductModule];//Создаем массив  из 10 обьекто снека
	std::cout << "This is constructor SnackSlot of object, adress =   "<<this << std::endl;
}
SnackSlot::~SnackSlot()
{
	std::cout << "This is destructor SnackSlot of object, adress = "<<this<<std::endl;
		delete pointSnack[curentSnack-1];
	delete[] pointSnack;
}

void SnackSlot::addSnack(Snack* object)
{

	if (this->curentSnack < this->maxProductModule)
	{
		pointSnack[curentSnack] = new Snack();
		pointSnack[curentSnack]->operator=(object);//Запускаем переопределенную операцию присваивания
		++curentSnack;
	}
}
void Snack::operator = ( Snack * other)
{
	std::cout << "Redefining an assignment operatorя Snack " <<this<< std::endl;
}