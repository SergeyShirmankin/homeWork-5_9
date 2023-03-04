#include <iostream>
int main()
{
	int a;
	std::cout << "Hello" << std::endl;
	std::cin >> a;
	return 0;
}
//int main() {
//	Snack *bounty = new Snack("Bounty");
//	Snack *snickers = new Snack("Snickers");
//	SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);
//	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
//	slot->addSnack(snickers);
//	VendingMachine* machine = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);
//	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат

//	cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}