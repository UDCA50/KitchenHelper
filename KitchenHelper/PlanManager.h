#pragma once

#include"Day.h"


class PlanManager {

private:
	std::vector<Day> monthPlan;	//한달 일정을 저장해놓음
	
public:
	PlanManager();
	Day getDailyPlan(int date);		// 해당 날짜를 리턴해주는 함수 
	void changeDate(Day changeDay, int date);	//해당 날짜의 계획을 수정해주는 함수
	void showDailyPlan(int date); // 해당 날자의 계획(식사,일정)을 보여줌

};