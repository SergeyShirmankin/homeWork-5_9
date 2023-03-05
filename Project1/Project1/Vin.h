#pragma once
class Snack
{
public:
	Snack();//����������� ��� ��������
	Snack(char *snackName);// ����������� ������ �� �����
	Snack(char *snackName, int snackPower);//����������� �� ���������� � �����
	Snack(char *snackName, int snackPower,int snackPrice);//����������� �� �����,����������, ����
	Snack::Snack(char* (*pointGetNameModule)(), int(*pointGetCountPower)(), int(*pointGetPrice)());//����������� c ����������� �� �������
	Snack(const Snack& other);//����������� �����������
	~Snack();//���������;
	void operator = ( Snack * other);
	char * getNameModule();// ������ �� �������
	int  getcountPower();
	int getPrice();
	int testPointFunc(int a, int b);
private:
	char * nameModule;
	int countPower;//���������� �������
	int price;//��������� 
public:
	char* (*pointGetNameModule)();//��������� �� �������
	int (*pointGetCountPower)();
	int (*pointGetPrice)();
	//int(*ptrtestPointFunc)(int, int);
};

class SnackSlot
{
public:
	SnackSlot(int maxProduct);//��������� ���� �������
	~SnackSlot();//����������
	//slot->addSnack(bounty)
	void addSnack(Snack* object);
	//��� ������ ����� �������� ���������� ������ �� ������ ���������� 
private:
	int curentSnack;// ���������� ������, ������� �������� � �����.
	Snack** pointSnack;//��������� �� ������ ������
	int maxProductModule;//
};