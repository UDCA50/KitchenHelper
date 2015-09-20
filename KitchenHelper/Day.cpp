#pragma once
#include"Day.h"
#include<iostream>


Day::Day(){

	strcpy_s(this->breakFastName, "아침없음");
	strcpy_s(this->lunchName, "점심없음");
	strcpy_s(this->dinnerName, "저녁없음");

	this->breakFastNumber = 1;
	this->lunchNumber = 1;
	this->dinnerNumber = 1;

}

void Day::showTodayData(){
	int number;
	int i;
	std::cout << "일정 : ";
	for (i = 0; i < todayPlan.size(); i++) {
		std::cout << todayPlan.at(i);
	}
	std::cout << std::endl;
	std::cout << "아침 메뉴 : " << breakFastName << std::endl;
	std::cout << "점심 메뉴 : " << lunchName << std::endl;
	std::cout << "저녁 메뉴 : " << dinnerName << std::endl;

}