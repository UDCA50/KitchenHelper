#include"Interface.h"


void FrontImage::printImage(){

	char garbageValue;
	string line;
	ifstream inFile("frontimage.txt", ios::in);

	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			system("Color 78");
			cout << line << "\n";
		}
		inFile.close();
		std::cin >> garbageValue;
		system("cls");
	}
}