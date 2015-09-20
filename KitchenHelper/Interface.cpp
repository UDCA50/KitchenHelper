#pragma once
#include"Interface.h"
#include<iostream>


Interface::Interface() {
		frontImage.printImage();		// 초기화면 출력
		showTodayInformation();
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

}


void Interface::editDayPlan(){

}

void Interface::editDayPlan(const char* dishName){

}

void Interface::showTodayInformation(){


}

void Interface::loadFileData(DataBase &dataBase, PlanManager &planmanager){

}


void Interface::saveFileData(DataBase &dataBase, PlanManager &planmanager){

}
