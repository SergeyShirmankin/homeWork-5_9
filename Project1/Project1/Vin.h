#pragma once
class Snack
{
public:
	Snack();//Конструктор для массиваж
	Snack(char *snackName);// Конструктор только по имени
	Snack(char *snackName, int snackPower);//Конструктор по энергетике и имени
	Snack(char *snackName, int snackPower,int snackPrice);//Еонструктор по именм,энергетике, цене
	Snack(const Snack& other);//конструктор копирования
	~Snack();//Деструкто;
private:
	char * nameModule;
	int countPower;//количество колорий
	int price;//стоимость 
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