#include<vector>


class Day{
private:
	std::vector<char*> todayPlan;		//���� ������ ������ ����
	

	//���� ��Ī
	char* breakFastName;
	char* lunchName;
	char* dinnerName;

	//�Ļ� �ο���
	int breakFastNumber;
	int lunchNumber;
	int dinnerNumber;

public:
	void showDate();		//���� ��ȹ(�Ļ�,������) �������

};