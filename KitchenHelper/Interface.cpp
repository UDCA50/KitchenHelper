#pragma once
#include"Interface.h"
#include<iostream>


Interface::Interface() {
		frontImage.printImage();		// �ʱ�ȭ�� ���
		showTodayInformation();
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

}


void Interface::editDayPlan(){

}

void Interface::editDayPlan(const char* dishName){

}

void Interface::showTodayInformation(){


}

void Interface::loadFileData(DataBase &dataBase, PlanManager &planmanager){

}


void Interface::saveFileData(DataBase &dataBase, PlanManager &planmanager){

}
