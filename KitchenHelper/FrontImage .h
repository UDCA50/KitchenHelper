#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
using std::ofstream;

const int ImageMaxSize = 60;

class FrontImage{

private:

public:

	void printImage(); //frontImage 출력하는 메소드
	void sayHellowToUser();		// 유저에게 인사말을 건네는 클래스
};