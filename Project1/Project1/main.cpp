#include <iostream>
#include "Vin.h"
int main()
{
	int a;
	{
		Snack *bounty = new Snack("Bounty");//Создаем в Куче указатель на обьек ткласса
		Snack *snickers = new Snack("Snickers");
		SnackSlot *slot = new SnackSlot(10);//*количество батончиков, которые помещаются в слот*
		
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
//	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
//	machine->addSlot(slot); // Помещаем слот обратно в аппарат

//	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}