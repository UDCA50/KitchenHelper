#pragma once
#include"Interface.h"
#include<iostream>


Interface::Interface() {
		//printTitleMenu();
		frontImage.printImage();		// 초기화면 출력
		showTodayInformation();
}

void Interface::printTitleMenu(){

	string line;
	ifstream inFile("Titlemenu.txt", ios::in);

	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			system("Color 78");
			std::cout << line;
		}
		inFile.close();
	}
}

void Interface::showFrontMenu(){

	int userInput = 0; 

	std::cout << "=================IIKH System Menu =============" << std::endl;
	std::cout << "1.레서피 검색 2.레서피 추가 3. 레서피 수정 " << std::endl;
	std::cout << " 4.레서피 삭제 5. 모든 레시피 종류 보기" << std::endl;
	std::cout << "6. 일정/식단 보기 7. 일정/식단 수정 8. 상태저장" << std::endl;
	std::cout << "9. 프로그램 종료" << std::endl;
	std::cout << "=================IIKH System Menu =============" << std::endl;
	std::cout << "번호를 입력하세요 : ";

	std::cin >> userInput;
	std::cout << "your Input is " << userInput << std::endl;

	switch (userInput)
	{
	case 1:
		//레서피 검색 
		break;
	case 2:
		// 레서피 추가
		break;
	case 3:
		// 레서피 수정
		break;
	case 4:
		// 레서피 삭제 
		break;
	case 5:
		// 모든 레서피 종류 보기
		break;
	case 6:
		// 일정/식단 보기
		showDayPlan();
		break;
	case 7:
		// 일정/식단 수정
		editDayPlan();
		break;
	case 8:
		// 현재 상태 저장 
		saveFileData(this->dataBase,this->planmanager);
		break;
	case 9:
		exit(1);
		break;
	default:
		break;
	}


}


void Interface::showDayPlan(){

	int date;
	std::cout << "확인할 날짜를 입력하세요 : ";
	std::cin >> date;

	while (date<1 || date>30) {
		cout << "날짜를 잘못입력하셨습니다. 확인할 날짜를 입력하세요 : ";
		std::cin >> date;
	}
	
	planmanager.showDailyPlan(date);

}


void Interface::editDayPlan()
{
	int day;
	int menu;
	Day myDay = planmanager.getDailyPlan(day);

	/* 1. 날짜 입력 */
	while (1)
	{
		cin >> day;

		if (1 <= day && day <= 31)
			break;
		else
			cout << "1에서 31 사이의 수만 입력하세요" << endl;
	
	}

	/* 2. 메뉴 */
	while (1)
	{

		myDay.showTodayData();
		cout << "1. 아침메뉴 수정하기" << endl << "2. 점심메뉴 수정하기" << endl << "3. 저녁메뉴 수정하기" << endl 
			 << "4. 일정추가하기" << endl << "5. 일정삭제하기" << endl;
	
		cin >> menu;

		if (menu == 1)
		{
			//dataBase.dishSearch("");
		}
		else if (menu == 2)
		{
		
		}
		else if (menu == 3)
		{

		}
		else if (menu == 4)
		{

		}
		else if (menu == 5)
		{

		}
		else
		{

		}
	
	
	}


	planmanager.changeDate(myDay, day);

}

void Interface::editDayPlan(const char* dishName){

}

void Interface::showTodayInformation(){


}

void Interface::loadFileData(DataBase &dataBase, PlanManager &planmanager){

}


void Interface::saveFileData(DataBase &dataBase, PlanManager &planmanager){

}
