#include "Vin.h"
#include <iostream>

Snack::Snack()//Конструктор Snack
{
	this->nameModule = 0;//Реализация конструктора
	this->countPower = 0;//Энергетическая ценность по умолчанию
	this->price = 0;//Цена по умолчанию
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
}
Snack::Snack(char *snackName)//Конструктор Snack
{
		this->nameModule = snackName;//Реализация конструктора
		this->countPower = 0;//Энергетическая ценность по умолчанию
		this->price = 0;//Цена по умолчанию
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::Snack(char *snackName, int snackPower)//Конструктор Snack
{
	this->nameModule = snackName;//Реализация конструктора
	this->countPower = snackPower;//Энергетическая ценность
	this->price = 0;//Цена по умолчанию
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(char *snackName, int snackPower, int snackPrice)//Конструктор Snack
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
Snack::~Snack()//Деструктор Snack
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//Реализация деструктора
}

SnackSlot::SnackSlot(int maxProduct)//Конструктор SnackSlot
{
	curentSnack = 0;
	this->maxProductModule = maxProduct;
	pointSnack = new Snack*[maxProductModule];//Создаем массив  из 10 обьекто снека
	std::cout << "This is constructor SnackSlot of object, adress =   "<<this << std::endl;
}
SnackSlot::~SnackSlot()//Деструктор SnackSlot
{
	std::cout << "This is destructor SnackSlot of object, adress = "<<this<<std::endl;
		delete pointSnack[curentSnack-1];
	delete[] pointSnack;
}

void SnackSlot::addSnack(Snack* object)//Функция добавления присваивания
{

	if (this->curentSnack < this->maxProductModule)
	{
		pointSnack[curentSnack] = new Snack();
		pointSnack[curentSnack]->operator=(object);//Запускаем переопределенную операцию присваивания
		//std::cout << "pointSnack [" << curentSnack << "]  = " << std::endl;
		++curentSnack;
	}
}
void Snack::operator = ( Snack * other)//Операция переопределения присваивания
{
	this->nameModule = other->nameModule;
	this->countPower = other->countPower;
	this->price = other->price;
}
char*  Snack:: getNameModule() //Гетер поля NameModule
{
	return this->nameModule;
}
int Snack::getcountPower()  //Гетер поля countPower
{
	return this->countPower;
}
int Snack::getPrice()//Гетер поля price
{
	return this->price;
}
Snack** SnackSlot:: getPointSnack()//Забираем указатель на массивы;
{
	return this->pointSnack;
}
int SnackSlot::getCurentSnack()
{
	return curentSnack;
}
int SnackSlot::getMaxProductModule()
{
	return maxProductModule;
}
void SnackSlot::showSnack()
{
	for (int i = 0; i < this->curentSnack; ++i)
	{
		std::cout << "pointSnack [" << i << "]  = " << this->pointSnack[i]<< std::endl;
		std::cout << "pointSnack [" << i << "] getcountPower   = " << this->pointSnack[i]->getcountPower() << std::endl;
		std::cout << "pointSnack [" << i << "] getNameModule   = " << this->pointSnack[i]->getNameModule() << std::endl;
		std::cout << "pointSnack [" << i << "] getcountPower   = " << this->pointSnack[i]->getcountPower() << std::endl;
		std::cout << "pointSnack [" << i << "] getPrice   = " << this->pointSnack[i]->getPrice() << std::endl;
	}

}
VendingMachine::VendingMachine(int maxCountSlot)
{
	this->maxProductModule = maxCountSlot;
	pointSlotSnack = new SnackSlot*[maxCountSlot];//Создаем массив  из 2 обьекто слотов снека
	std::cout << "This is constructor SnackSlot of object, adress =   " << this << std::endl;
}

void VendingMachine::addSlot(SnackSlot slot)// Добавить слот слот в аппарат
{
	std::cout << "function addSlot " <<std::endl;
}
void VendingMachine::getEmptySlotsCount()// Должно выводить количество пустых слотов
{
	std::cout << "function getEmptySlotsCoun " << std::endl;
}