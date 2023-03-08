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
	//friend void showSlot();//Дружественная функция;
public:
	SnackSlot(int maxProduct);//Заполняем слот снеками
	~SnackSlot();//Деструктор
	void addSnack(Snack* object);
	Snack** getPointSnack();//Забираем указатель на массив
	int getCurentSnack();//Гетеры
	int getMaxProductModule();
	void operator = (SnackSlot * other);//переопределяем оператор присваивания
	void showSnack();//Выводим на экран снеки 
private:
	int curentSnack;// количество снеков, которые остались в лотке.
	Snack** pointSnack;//Указатель на массив снеков
	int maxProductModule;
};
class VendingMachine
{
   friend void showSlot(VendingMachine& value);//Выводим на экран слоты через дружескую функцию
public:
	VendingMachine();//
	VendingMachine(int countSlot);//Конструктор вендинг машинф
	~VendingMachine();//Деструктор 
	void addSlot(SnackSlot *slot); // Добавить слот слот в аппарат
	int getEmptySlotsCount(); // Должно выводить количество пустых слотов
	int getCurrentSlot();
	int getMaxProductModule();
private:
	int  emptySlotsCount;//Количесиво пустых слотов
	int  currentSlot;//Текущий слот
	SnackSlot** pointSlotSnack;//Указатель на массив  слотов снеков
	int maxProductModule;
};
