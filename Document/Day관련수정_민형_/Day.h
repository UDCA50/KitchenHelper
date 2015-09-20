#pragma once
#include<vector>
#include<string>
const int NameMaxLength = 10;

class Day{
private:
	std::vector<char*> todayPlan;		//오늘 일정을 저장한 백터
	
	//음식 명칭
	char breakFastName[NameMaxLength];
	char lunchName[NameMaxLength];
	char dinnerName[NameMaxLength];

	//식사 인원수
	int breakFastNumber;
	int lunchNumber;
	int dinnerNumber;

public:
	Day();
	void showTodayData();		//오늘 계획(식사,일정을) 출력해줌

};