#pragma once
#include"Day.h"
#include<iostream>


Day::Day(){

	strcpy_s(this->breakFastName, "��ħ����");
	strcpy_s(this->lunchName, "���ɾ���");
	strcpy_s(this->dinnerName, "�������");

	this->breakFastNumber = 1;
	this->lunchNumber = 1;
	this->dinnerNumber = 1;

}

void Day::showTodayData(){
	int number;
	int i;
	std::cout << "���� : ";
	for (i = 0; i < todayPlan.size(); i++) {
		std::cout << todayPlan.at(i);
	}
	std::cout << std::endl;
	std::cout << "��ħ �޴� : " << breakFastName << std::endl;
	std::cout << "���� �޴� : " << lunchName << std::endl;
	std::cout << "���� �޴� : " << dinnerName << std::endl;

}