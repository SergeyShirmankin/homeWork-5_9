#include "Vin.h"
#include <iostream>

Snack::Snack()
{
	this->nameModule = 0;//���������� ������������
	this->countPower = 0;//�������������� �������� �� ���������
	this->price = 0;//���� �� ���������
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
}
Snack::Snack(char *snackName)
{
		this->nameModule = snackName;//���������� ������������
		this->countPower = 0;//�������������� �������� �� ���������
		this->price = 0;//���� �� ���������
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::Snack(char *snackName, int snackPower)
{
	this->nameModule = snackName;//���������� ������������
	this->countPower = snackPower;//�������������� ��������
	this->price = 0;//���� �� ���������
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(char *snackName, int snackPower, int snackPrice)
{
	this->nameModule = snackName;//���������� ������������
	this->countPower = snackPower;//�������������� ��������
	this->price = snackPrice;//���� 
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(const Snack& other)//����������� �����������
{
	std::cout << "Call the copy constructor " << std::endl;
}
Snack::~Snack()
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//���������� �����������
}

SnackSlot::SnackSlot(int maxProduct)
{
	curentSnack = 0;
	this->maxProductModule = maxProduct;
	 pointSnack = new Snack*[maxProductModule];//������� ������  �� 10 ������� �����
	for (int i = 0; i < maxProductModule; i++)
	{
		pointSnack[i] = new Snack("Emty");//�������� ������ �������
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