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
		machine->addSlot(slot); // �������� ���� ���� � ������� ��� �������
		machine->addSlot(slot); // �������� ���� ���� � �������  ��� ������
		showSlot(*machine);//������������� ������� *machine!!!!!!!!!!!
		//	slot->addSnack(bounty); //��������� �������� 1 � ���� ��� ������
		//	slot->showSnack();//���������� ������ �� 1 �����		
		//slot->addSnack(snickers);
		//slot->showSnack(); ////��������� �������� 1 � ���� ��� �������
		delete bounty; //����������� ������
		delete snickers;
    	delete machine;
//		delete slot;
	}
	std::cin >> a;
	return 0;
}
