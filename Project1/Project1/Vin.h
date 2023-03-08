#pragma once
class Snack
{
public:
	Snack();//����������� ��� ��������
	Snack(char *snackName);// ����������� ������ �� �����
	Snack(char *snackName, int snackPower);//����������� �� ���������� � �����
	Snack(char *snackName, int snackPower,int snackPrice);//����������� �� �����,����������, ����
	Snack(const Snack& other);//����������� �����������
	~Snack();//���������;
	void operator = ( Snack * other);
	char * getNameModule();// ������ �� �������
	int  getcountPower();
	int getPrice();
private:
	char * nameModule;
	int countPower;//���������� �������
	int price;//��������� 
};

class SnackSlot
{
	//friend void showSlot();//������������� �������;
public:
	SnackSlot(int maxProduct);//��������� ���� �������
	~SnackSlot();//����������
	void addSnack(Snack* object);
	Snack** getPointSnack();//�������� ��������� �� ������
	int getCurentSnack();//������
	int getMaxProductModule();
	void operator = (SnackSlot * other);//�������������� �������� ������������
	void showSnack();//������� �� ����� ����� 
private:
	int curentSnack;// ���������� ������, ������� �������� � �����.
	Snack** pointSnack;//��������� �� ������ ������
	int maxProductModule;
};
class VendingMachine
{
   friend void showSlot(VendingMachine& value);//������� �� ����� ����� ����� ��������� �������
public:
	VendingMachine();//
	VendingMachine(int countSlot);//����������� ������� ������
	~VendingMachine();//���������� 
	void addSlot(SnackSlot *slot); // �������� ���� ���� � �������
	int getEmptySlotsCount(); // ������ �������� ���������� ������ ������
	int getCurrentSlot();
	int getMaxProductModule();
private:
	int  emptySlotsCount;//���������� ������ ������
	int  currentSlot;//������� ����
	SnackSlot** pointSlotSnack;//��������� �� ������  ������ ������
	int maxProductModule;
};
