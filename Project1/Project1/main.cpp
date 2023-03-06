#include <iostream>
#include "Vin.h"
int main()
{
	int a;
	{
		Snack *bounty = new Snack("Bounty",5,10);//—оздаем в  уче указатель на обьек ткласса
		Snack *snickers = new Snack("Snickers",10,20);
		SnackSlot *slot = new SnackSlot(10);//*количество батончиков, которые помещаютс€ в слот*
		for (int i = 0; i < slot->getMaxProductModule(); i++) {//заполн€ем батончиками первый	 слот
			slot->addSnack(bounty); //ƒобавл€ем батончик 1 в слот
			slot->showSnack();//ќтображаем данные по 1 слоту
		}
		slot->addSnack(snickers);
		slot->showSnack();
		delete bounty; //ќсвобождаем пам€ть
		delete snickers;
		delete slot;
	}
	std::cin >> a;
	return 0;
}
//int main() {
//	Snack *bounty = new Snack("Bounty");
//	Snack *snickers = new Snack("Snickers");
//	SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);
//	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
//	slot->addSnack(snickers);
//  slot->subSnack(snickers); вычесть баточик из слота
//  slot->subSnack(bouty); вычесть баточик из слота
//	VendingMachine* machine = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);
//	machine->addSlot(slot); // ƒобавить слот слот в аппарат
//	cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов
// загрузить машину 
//  упить товар
//≈сли товар закончилс€ то выдать сообщение, что нет товара
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}