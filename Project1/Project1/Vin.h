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
	void operator = ( Snack * other);
	char * getNameModule();// Гетеры на функцию
	int  getcountPower();
	int getPrice();
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
	void addSnack(Snack* object);
	Snack** getPointSnack();//Забираем указатель на массив
	int getCurentSnack();//Гетеры
	int getMaxProductModule();
	void showSnack();//Выводим на экран снеки
	//при выдаче снека отнимаем количество снеков из общего количества 
private:
	int curentSnack;// количество снеков, которые остались в лотке.
	Snack** pointSnack;//Указатель на массив снеков
	int maxProductModule;
};
class VendingMachine
{
public:
	VendingMachine(int countSlot);//Конструктор вендинг машинф
	void addSlot(SnackSlot slot); // Добавить слот слот в аппарат
	void getEmptySlotsCount(); // Должно выводить количество пустых слотов
private:
	int  emptySlotsCount;//Количесиво пустых слотов
	int  currentSlot;//Текущий слот
	SnackSlot** pointSlotSnack;//Указатель на массив  слотов снеков
	int maxProductModule;
};
