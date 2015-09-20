#pragma once
#include<vector>
#include<string>
const int NameMaxLength = 10;

class Day{
private:
	std::vector<char*> todayPlan;		//���� ������ ������ ����
	
	//���� ��Ī
	char breakFastName[NameMaxLength];
	char lunchName[NameMaxLength];
	char dinnerName[NameMaxLength];

	//�Ļ� �ο���
	int breakFastNumber;
	int lunchNumber;
	int dinnerNumber;

public:
	Day();
	void showTodayData();		//���� ��ȹ(�Ļ�,������) �������

};