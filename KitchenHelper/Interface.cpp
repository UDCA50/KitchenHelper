#pragma once
#include"Interface.h"
#include<iostream>


Interface::Interface() {
		//printTitleMenu();
		frontImage.printImage();		// �ʱ�ȭ�� ���
		showTodayInformation();
}

void Interface::printTitleMenu(){

	string line;
	ifstream inFile("Titlemenu.txt", ios::in);

	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			system("Color 78");
			std::cout << line;
		}
		inFile.close();
	}
}

void Interface::showFrontMenu(){

	int userInput = 0; 

	std::cout << "=================IIKH System Menu =============" << std::endl;
	std::cout << "1.������ �˻� 2.������ �߰� 3. ������ ���� " << std::endl;
	std::cout << " 4.������ ���� 5. ��� ������ ���� ����" << std::endl;
	std::cout << "6. ����/�Ĵ� ���� 7. ����/�Ĵ� ���� 8. ��������" << std::endl;
	std::cout << "9. ���α׷� ����" << std::endl;
	std::cout << "=================IIKH System Menu =============" << std::endl;
	std::cout << "��ȣ�� �Է��ϼ��� : ";

	std::cin >> userInput;
	std::cout << "your Input is " << userInput << std::endl;

	switch (userInput)
	{
	case 1:
		//������ �˻� 
		break;
	case 2:
		// ������ �߰�
		break;
	case 3:
		// ������ ����
		break;
	case 4:
		// ������ ���� 
		break;
	case 5:
		// ��� ������ ���� ����
		break;
	case 6:
		// ����/�Ĵ� ����
		showDayPlan();
		break;
	case 7:
		// ����/�Ĵ� ����
		editDayPlan();
		break;
	case 8:
		// ���� ���� ���� 
		saveFileData(this->dataBase,this->planmanager);
		break;
	case 9:
		exit(1);
		break;
	default:
		break;
	}


}


void Interface::showDayPlan(){

	int date;
	std::cout << "Ȯ���� ��¥�� �Է��ϼ��� : ";
	std::cin >> date;

	while (date<1 || date>30) {
		cout << "��¥�� �߸��Է��ϼ̽��ϴ�. Ȯ���� ��¥�� �Է��ϼ��� : ";
		std::cin >> date;
	}
	
	planmanager.showDailyPlan(date);

}


void Interface::editDayPlan()
{
	int day;
	int menu;
	Day myDay = planmanager.getDailyPlan(day);

	/* 1. ��¥ �Է� */
	while (1)
	{
		cin >> day;

		if (1 <= day && day <= 31)
			break;
		else
			cout << "1���� 31 ������ ���� �Է��ϼ���" << endl;
	
	}

	/* 2. �޴� */
	while (1)
	{

		myDay.showTodayData();
		cout << "1. ��ħ�޴� �����ϱ�" << endl << "2. ���ɸ޴� �����ϱ�" << endl << "3. ����޴� �����ϱ�" << endl 
			 << "4. �����߰��ϱ�" << endl << "5. ���������ϱ�" << endl;
	
		cin >> menu;

		if (menu == 1)
		{
			//dataBase.dishSearch("");
		}
		else if (menu == 2)
		{
		
		}
		else if (menu == 3)
		{

		}
		else if (menu == 4)
		{

		}
		else if (menu == 5)
		{

		}
		else
		{

		}
	
	
	}


	planmanager.changeDate(myDay, day);

}

void Interface::editDayPlan(const char* dishName){

}

void Interface::showTodayInformation(){


}

void Interface::loadFileData(DataBase &dataBase, PlanManager &planmanager){

}


void Interface::saveFileData(DataBase &dataBase, PlanManager &planmanager){

}
