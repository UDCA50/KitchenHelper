/*
 * �����ǿ� �� ���.
 * Created by �ſ���/������/�ֿ�ȣ
 */

#pragma once
#include<iostream>

using namespace std;

class Ingredient{

private:
	char* ingredientName;					//����
	int amount;								//��ᷮ
public:
	Ingredient(char* name, int amount);		//������
											//��Ḧ �Է¹��� ��, �̸��� ���� �Է¹���
	char* getIngredientName();				//������ ��ȯ��
	int getAmount();						//��ᷮ�� ��ȯ��

	void setName(char* name);							//������ setting(���� ��)
	void setAmount(int amount);						//��ᷮ�� setting(���� ��)

};
