#include"Day.h"


class PlanManager {

private:
	std::vector<Day> monthPlan;	//�Ѵ� ������ �����س���


	void showDailyPlan(int date); // �ش� ������ ��ȹ(�Ļ�,����)�� ������

public:
	Day getDailyPlan(int date);		//date ��¥�� Day �ν��Ͻ��� �������ִ� �żҵ�
	void changeDate(Day changeDay, int date);	//monthPlan[date] �� changeDay�� �ٲپ��ִ� �żҵ�

};