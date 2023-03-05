#include <iostream>
#include "Vin.h"
//int testPointFunc(int a, int b)
//{
//	return a + b;
//}

int main()
{
	int a;
	//int(*ptrtestPointFunc)(int,int);
	//ptrtestPointFunc = testPointFunc;
	{
		Snack *bounty = new Snack("Bounty",5,10);//Создаем в Куче указатель на обьек ткласса
		Snack *snickers = new Snack("Snickers",10,20);
		SnackSlot *slot = new SnackSlot(10);//*количество батончиков, которые помещаются в слот*
	    
		slot->addSnack(bounty); //Добавляем батончик 1 в слот
		slot->addSnack(bounty); //Добавляем батончик 2 в слот
//		slot->addSnack(snickers);
		delete bounty; //Освобождаем память
		delete snickers;
		delete slot;
	}
	std::cin >> a;
	return 0;
}
//int main() {
//	Snack *bounty = new Snack("Bounty");
//	Snack *snickers = new Snack("Snickers");
//	SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
//	slot->addSnack(bounty); //Добавляем батончик в слот
//	slot->addSnack(snickers);
//  slot->subSnack(snickers); вычесть баточик из слота
//  slot->subSnack(bouty); вычесть баточик из слота
//	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
//	machine->addSlot(slot); // Добавить слот слот в аппарат
//	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов
// загрузить машину 
// Купить товар
//Если товар закончился то выдать сообщение, что нет товара
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}