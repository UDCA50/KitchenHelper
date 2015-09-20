#include"PlanManager.h"


PlanManager::PlanManager(){

	for (int i = 0; i < 31; i++) {
		Day myDate;
		monthPlan.push_back(myDate);
	}
}

void PlanManager::showDailyPlan(int date){
	// 해당 날자의 계획(식사,일정)을 보여줌

}


Day PlanManager::getDailyPlan(int date)	{	// 해당 날짜를 리턴해주는 함수 

	Day myday;
	return myday;
}
void PlanManager::changeDate(Day changeDay, int date)	{//해당 날짜의 계획을 수정해주는 함수

}
