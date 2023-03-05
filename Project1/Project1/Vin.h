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
private:
	char * nameModule;
	int countPower;//���������� �������
	int price;//��������� 
};

class SnackSlot
{
public:
	SnackSlot(int maxProduct);//��������� ���� �������
	~SnackSlot();//����������
	//slot->addSnack(bounty)
	void addSnack(Snack* object);
	void operator = (Snack * other);
	//��� ������ ����� �������� ���������� ������ �� ������ ���������� 
private:
	int curentSnack;// ���������� ������, ������� �������� � �����.
	Snack** pointSnack;//��������� �� ������ ������
	int maxProductModule;//
};