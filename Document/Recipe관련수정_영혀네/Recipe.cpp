/*
 * Recipe Method ����
 * Created by �ſ���/������/�ֿ�ȣ
 */

#pragma once
#include "Recipe.h"

//������
Recipe::Recipe(char* name)
{
	this->dishName = name;
}

//private���� Method

int Recipe::findNumberOfIngredient(char* name) {
	int ingredientNum = 0;
	int i = 0;
	int maxVectorNum;
	maxVectorNum = ingredient.size();
	for (i = 0; i<maxVectorNum; i++) {
		if (ingredient[ingredientNum].getIngredientName() == name) {
			return ingredientNum;
		}
	}
	return -1;	//-1�� return �� ��� �ش� ������ �� ã���� �ϴ� ��ᰡ ���ٴ� ���� �ǹ�
}				//���� ����� ��ȣ�� ��ȯ. (���° �������) //�Ű����� ����


char* Recipe::getIngredientName(int ingredientNumber) {
	
	return ingredient[ingredientNumber].getIngredientName();
}		//���° ����� ������ ��ȯ


void Recipe::setIngredientName(char* name)
{
	ingredient[ingredientCount].setName(name);
}

void Recipe::setIngredientName(char* name, int ingredientNumber)
{
	ingredient[ingredientNumber].setName(name);
}

int Recipe::getIngredientAmount(int ingredientNumber) {
	return ingredient[ingredientNumber].getAmount();
}

void Recipe::setIngredientAmount(int amount)
{
	ingredient[ingredientCount].setAmount(amount);
}

void Recipe::setIngredientAmount(int amount,int ingredientNumber)
{
	ingredient[ingredientNumber].setAmount(amount);
}

void Recipe::ingredientDelete(int ingredientNumber)
{
	ingredient.erase(ingredient.begin() + ingredientNumber);
}	//��� ��� ����

void Recipe::showIngredient(int ingredientNumber)
{
	cout << "���� : " << ingredient[ingredientNumber].getIngredientName() << endl;
	cout << "��ᷮ : " << ingredient[ingredientNumber].getAmount() << endl;
}

//public���� method
char* Recipe::getDishName()
{
	return dishName;
}

char* Recipe::getRecipedOfDish()
{
	return recipeOfDish;
}


void Recipe::ingredientAdd(char* name, int amount)
{
	setIngredientName(name);
	setIngredientAmount(amount);
	ingredientCount++;
}

void Recipe::setDishName(char* name)
{
	this->dishName = name;
}

void Recipe::setRecipeOfDish(char* recipeOfDish)
{
	this->recipeOfDish = recipeOfDish;
}

void Recipe::ingredientModify(int ingredientNumber)
{
	int modifyChoice;
	cout << "1. ���� ����\n2.��ᷮ ����\n3.�� ��� ����\n0.���θ޴���..." << endl;
	cout << "���� >> ";
	cin >> modifyChoice;
	switch (modifyChoice)
	{
	case 1:
		char* modifyName;
		cout << "������ ������ �Է��ϼ���. >>";
		cin >> modifyName;
		setIngredientName(modifyName, ingredientNumber);
		break;
	case 2:
		int modifyAmount;
		cout << "������ ��ᷮ�� �Է��ϼ���. >>";
		cin >> modifyAmount;
		setIngredientAmount(modifyAmount, ingredientNumber);
		break;
	case 3:
		ingredientDelete(ingredientNumber);
		break;

	case 0:
		break;
	default: 
		cout << "�߸��� ����Դϴ�." << endl;
		break;
	}

}

void Recipe::showAllRecipeInformation()
{
	cout << "�丮�� : " << dishName << endl;
	cout << "*******���*******" << endl;
	for (int i = 0; i < ingredient.size(); i++)
		showIngredient(i);
	cout << "******************" << endl;
	cout << "������ : " << recipeOfDish;
}