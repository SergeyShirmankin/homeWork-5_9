#pragma once
class Snack
{
public:
	Snack(char *myName);// �����������
	~Snack();//���������;
private:
	char * nameModule;
};

class SnackSlot
{
public:
	SnackSlot(int count);//�����������
	~SnackSlot();//����������
private:
	int countModule;
};