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
		Snack *bounty = new Snack("Bounty",5,10);//������� � ���� ��������� �� ����� �������
		Snack *snickers = new Snack("Snickers",10,20);
		SnackSlot *slot = new SnackSlot(10);//*���������� ����������, ������� ���������� � ����*
	    
		slot->addSnack(bounty); //��������� �������� 1 � ����
		slot->addSnack(bounty); //��������� �������� 2 � ����
//		slot->addSnack(snickers);
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
//  slot->subSnack(snickers); ������� ������� �� �����
//  slot->subSnack(bouty); ������� ������� �� �����
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