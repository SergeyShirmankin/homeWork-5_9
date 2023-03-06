#include "Vin.h"
#include <iostream>

Snack::Snack()//����������� Snack
{
	this->nameModule = 0;//���������� ������������
	this->countPower = 0;//�������������� �������� �� ���������
	this->price = 0;//���� �� ���������
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
}
Snack::Snack(char *snackName)//����������� Snack
{
		this->nameModule = snackName;//���������� ������������
		this->countPower = 0;//�������������� �������� �� ���������
		this->price = 0;//���� �� ���������
		std::cout << "nameModule = " << nameModule<<std::endl;
		std::cout << "This is constructor Snack of object, adress =  "<<this << std::endl;
};
Snack::Snack(char *snackName, int snackPower)//����������� Snack
{
	this->nameModule = snackName;//���������� ������������
	this->countPower = snackPower;//�������������� ��������
	this->price = 0;//���� �� ���������
	std::cout << "nameModule = " << nameModule << std::endl;
	std::cout << "This is constructor Snack of object, adress =  " << this << std::endl;
};
Snack::Snack(char *snackName, int snackPower, int snackPrice)//����������� Snack
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
Snack::~Snack()//���������� Snack
{
	std::cout << "This destructor Snack  of object, adress = "<<this <<std:: endl;//���������� �����������
}

SnackSlot::SnackSlot(int maxProduct)//����������� SnackSlot
{
	curentSnack = 0;
	this->maxProductModule = maxProduct;
	pointSnack = new Snack*[maxProductModule];//������� ������  �� 10 ������� �����
	std::cout << "This is constructor SnackSlot of object, adress =   "<<this << std::endl;
}
SnackSlot::~SnackSlot()//���������� SnackSlot
{
	std::cout << "This is destructor SnackSlot of object, adress = "<<this<<std::endl;
		delete pointSnack[curentSnack-1];
	delete[] pointSnack;
}

void SnackSlot::addSnack(Snack* object)//������� ���������� ������������
{

	if (this->curentSnack < this->maxProductModule)
	{
		pointSnack[curentSnack] = new Snack();
		pointSnack[curentSnack]->operator=(object);//��������� ���������������� �������� ������������
		//std::cout << "pointSnack [" << curentSnack << "]  = " << std::endl;
		++curentSnack;
	}
}
void Snack::operator = ( Snack * other)//�������� ��������������� ������������
{
	this->nameModule = other->nameModule;
	this->countPower = other->countPower;
	this->price = other->price;
}
char*  Snack:: getNameModule() //����� ���� NameModule
{
	return this->nameModule;
}
int Snack::getcountPower()  //����� ���� countPower
{
	return this->countPower;
}
int Snack::getPrice()//����� ���� price
{
	return this->price;
}
Snack** SnackSlot:: getPointSnack()//�������� ��������� �� �������;
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
	pointSlotSnack = new SnackSlot*[maxCountSlot];//������� ������  �� 2 ������� ������ �����
	std::cout << "This is constructor SnackSlot of object, adress =   " << this << std::endl;
}

void VendingMachine::addSlot(SnackSlot slot)// �������� ���� ���� � �������
{
	std::cout << "function addSlot " <<std::endl;
}
void VendingMachine::getEmptySlotsCount()// ������ �������� ���������� ������ ������
{
	std::cout << "function getEmptySlotsCoun " << std::endl;
}