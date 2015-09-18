#include"Day.h"


class PlanManager {

private:
	std::vector<Day> monthPlan;	//한달 일정을 저장해놓음


	void showDailyPlan(int date); // 해당 날자의 계획(식사,일정)을 보여줌

public:
	Day getDailyPlan(int date);		//date 날짜의 Day 인스턴스를 리턴해주는 매소드
	void changeDate(Day changeDay, int date);	//monthPlan[date] 를 changeDay로 바꾸어주는 매소드

};