#include"Day.h"


class PlanManager {

private:
	std::vector<Day> monthPlan;	//�Ѵ� ������ �����س���
	void showDailyPlan(int date); // �ش� ������ ��ȹ(�Ļ�,����)�� ������

public:
	Day getDailyPlan(int date);		// �ش� ��¥�� �������ִ� �Լ� 
	void changeDate(Day changeDay, int date);	//�ش� ��¥�� ��ȹ�� �������ִ� �Լ�

};