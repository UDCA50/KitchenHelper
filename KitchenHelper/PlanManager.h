#pragma once

#include"Day.h"


class PlanManager {

private:
	std::vector<Day> monthPlan;	//�Ѵ� ������ �����س���
	
public:
	PlanManager();
	Day getDailyPlan(int date);		// �ش� ��¥�� �������ִ� �Լ� 
	void changeDate(Day changeDay, int date);	//�ش� ��¥�� ��ȹ�� �������ִ� �Լ�
	void showDailyPlan(int date); // �ش� ������ ��ȹ(�Ļ�,����)�� ������

};