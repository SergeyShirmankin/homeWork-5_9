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
	//��� ������ ����� �������� ���������� ������ �� ������ ���������� 
private:
	int curentSnack;// ���������� ������, ������� �������� � �����.
	Snack** pointSnack;//��������� �� ������ ������
	int maxProductModule;//
};