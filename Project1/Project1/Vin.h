#pragma once
class Snack
{
public:
	Snack(char *myName);// Конструктор
	~Snack();//Деструкто;
private:
	char * nameModule;
};

class SnackSlot
{
public:
	SnackSlot(int count);//Конструктор
	~SnackSlot();//Деструктор
private:
	int countModule;
};