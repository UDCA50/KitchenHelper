#pragma once
#include"Day.h"


Day::Day(){

	strcpy_s(this->breakFastName, "아침없음");
	strcpy_s(this->lunchName, "점심없음");
	strcpy_s(this->dinnerName, "저녁없음");

	this->breakFastNumber = 1;
	this->lunchNumber = 1;
	this->dinnerNumber = 1;

}