#include<vector>


class Day{
private:
	std::vector<char*> todayPlan;		//���� ������ ������ ����
	
	char* breakFastName;
	char* lunchName;
	char* dinnerName;

	int breakFastNumber;
	int lunchNumber;
	int dinnerNumber;

public:
	void showDate();		//���� ��ȹ(�Ļ�,������) �������

};