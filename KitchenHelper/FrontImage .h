#pragma once
#include<iostream>


const int ImageMaxSize = 10;

class FrontImage{

private:
	char frontImage[ImageMaxSize][ImageMaxSize];

public:

	void printImage(); //frontImage 출력하는 매소드
	void sayHellowToUser();		// 유저에게 인사말을 건네는 클래스
};
