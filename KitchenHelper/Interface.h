#pragma once

#include"DataBase.h"9
#include"FrontImage .h"
#include"PlanManager.h"


class Interface{
private:

	FrontImage frontImage;		//처음 이미지를 출력하는 클래스
	DataBase dataBase;			// 레서피정보를 담고있는 클래스
	PlanManager planmanager;		// 전체 일정 정보를 담고있는 클래스


	void showTodayInformation();	//오늘의 계획(일정,식단)을 보여주는 클래스
	void showDayPlan();		// 특정날짜의 계획을 보여주는 매소드

	void editDayPlan();		// 특정날짜의 계획을 편집하는 매소드
	
	void editDayPlan(const char* dishName);	//특정 요리이름을 받아, 특정날짜의 식단을 변경하는 매소드 

	void loadFileData(DataBase &dataBase, PlanManager &planmanager);	//저장된 레서피, 계획 정보를 불러오는 매소드
	void saveFileData(DataBase &dataBase, PlanManager &planmanager);
	void printTitleMenu();
public:
	Interface();
	void showFrontMenu();	//처음 메뉴를 보여주는 함수 (1번~8번)
	
};