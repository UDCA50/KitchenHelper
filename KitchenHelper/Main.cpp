#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Interface.h"

int main(void) {

	Interface myInterFace;
	while (1) {
		myInterFace.showFrontMenu();
	}
	return 0;
}