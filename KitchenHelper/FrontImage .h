#pragma once
#include<iostream>


const int ImageMaxSize = 10;

class FrontImage{

private:
	char frontImage[ImageMaxSize][ImageMaxSize];

public:

	void printImage(); //frontImage ����ϴ� �żҵ�
	void sayHellowToUser();		// �������� �λ縻�� �ǳ״� Ŭ����
};
