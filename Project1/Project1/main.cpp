#include <iostream>
#include "Vin.h"
int main()
{
	int a;
	{
		Snack *bounty = new Snack("Bounty",5,10);//Создаем в Куче указатель на обьек ткласса
		Snack *snickers = new Snack("Snickers",10,20);
		SnackSlot *slot = new SnackSlot(10);//*количество батончиков, которые помещаются в слот*
		VendingMachine* machine = new VendingMachine(2); //*Количество слотов для снеков*/);
		machine->addSlot(slot); // Добавить слот слот в аппарат для сникерс
		machine->addSlot(slot); // Добавить слот слот в аппарат  для баунти
		showSlot(*machine);//разыменование адресса *machine!!!!!!!!!!!
		//	slot->addSnack(bounty); //Добавляем батончик 1 в слот для баунти
		//	slot->showSnack();//Отображаем данные по 1 слоту		
		//slot->addSnack(snickers);
		//slot->showSnack(); ////Добавляем батончик 1 в слот для сникерс
		delete bounty; //Освобождаем память
		delete snickers;
    	delete machine;
//		delete slot;
	}
	std::cin >> a;
	return 0;
}
