#include <iostream>
#include "Vin.h"
int main()
{
	int a;
	{
		Snack *bounty = new Snack("Bounty",5,10);//������� � ���� ��������� �� ����� �������
		Snack *snickers = new Snack("Snickers",10,20);
		SnackSlot *slot = new SnackSlot(10);//*���������� ����������, ������� ���������� � ����*
		VendingMachine* machine = new VendingMachine(2); //*���������� ������ ��� ������*/);
		for (int i = 0; i < slot->getMaxProductModule(); i++) {//��������� ����������� ������	 ����
			slot->addSnack(bounty); //��������� �������� 1 � ����
			slot->showSnack();//���������� ������ �� 1 �����
		}
		
		slot->addSnack(snickers);
		slot->showSnack();
		delete bounty; //����������� ������
		delete snickers;
		delete slot;
	}
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
//	machine->addSlot(slot); // �������� ���� ���� � �������
//	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������
// ��������� ������ 
// ������ �����
//���� ����� ���������� �� ������ ���������, ��� ��� ������
//delete machine;
//	delete slot;
//	delete snickers;
//	delete bounty;
//}