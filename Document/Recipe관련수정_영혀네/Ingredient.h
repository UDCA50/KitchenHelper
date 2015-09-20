/*
 * 레시피에 들어갈 재료.
 * Created by 신영현/남성준/최연호
 */

#pragma once
#include<iostream>

using namespace std;

class Ingredient{

private:
	char* ingredientName;					//재료명
	int amount;								//재료량
public:
	Ingredient(char* name, int amount);		//생성자
											//재료를 입력받을 때, 이름과 양을 입력받음
	char* getIngredientName();				//재료명을 반환함
	int getAmount();						//재료량을 반환함

	void setName(char* name);							//재료명을 setting(수정 시)
	void setAmount(int amount);						//재료량을 setting(수정 시)

};
