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
//	SnackSlot *slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
//	slot->addSnack(bounty); //��������� �������� � ����
//	slot->addSnack(snickers);
//	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
//	machine->addSlot(slot); // �������� ���� ������� � �������

//	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}