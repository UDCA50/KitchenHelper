#include"PlanManager.h"


PlanManager::PlanManager(){

	for (int i = 0; i < 31; i++) {
		Day myDate;
		monthPlan.push_back(myDate);
	}
}

void PlanManager::showDailyPlan(int date){
	// �ش� ������ ��ȹ(�Ļ�,����)�� ������
	monthPlan[date - 1].showTodayData();

}


Day PlanManager::getDailyPlan(int date)   {   // �ش� ��¥�� �������ִ� �Լ� 

	Day myday = monthPlan[date - 1];

	return myday;
}
void PlanManager::changeDate(Day changeDay, int date)   {//�ش� ��¥�� ��ȹ�� �������ִ� �Լ�

}