#pragma once
#include"Day.h"


Day::Day(){

	strcpy_s(this->breakFastName, "��ħ����");
	strcpy_s(this->lunchName, "���ɾ���");
	strcpy_s(this->dinnerName, "�������");

	this->breakFastNumber = 1;
	this->lunchNumber = 1;
	this->dinnerNumber = 1;

}