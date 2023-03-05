#pragma once
class Snack
{
public:
	Snack();//Конструктор для массиваж
	Snack(char *snackName);// Конструктор только по имени
	Snack(char *snackName, int snackPower);//Конструктор по энергетике и имени
	Snack(char *snackName, int snackPower,int snackPrice);//Еонструктор по именм,энергетике, цене
	Snack::Snack(char* (*pointGetNameModule)(), int(*pointGetCountPower)(), int(*pointGetPrice)());//Конструктор c указателями на функцию
	Snack(const Snack& other);//конструктор копирования
	~Snack();//Деструкто;
	void operator = ( Snack * other);
	char * getNameModule();// Гетеры на функцию
	int  getcountPower();
	int getPrice();
	int testPointFunc(int a, int b);
private:
	char * nameModule;
	int countPower;//количество колорий
	int price;//стоимость 
public:
	char* (*pointGetNameModule)();//указатели на функции
	int (*pointGetCountPower)();
	int (*pointGetPrice)();
	//int(*ptrtestPointFunc)(int, int);
};

class SnackSlot
{
public:
	SnackSlot(int maxProduct);//Заполняем слот снеками
	~SnackSlot();//Деструктор
	//slot->addSnack(bounty)
	void addSnack(Snack* object);
	//при выдаче снека отнимаем количество снеков из общего количества 
private:
	int curentSnack;// количество снеков, которые остались в лотке.
	Snack** pointSnack;//Указатель на массив снеков
	int maxProductModule;//
};