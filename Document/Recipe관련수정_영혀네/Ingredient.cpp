/*
 * Ingredient Method ����
 * Created by �ſ���/������/�ֿ�ȣ
 */
#include "Ingredient.h"

Ingredient::Ingredient(char* name, int amount)
{
	this->ingredientName = name;
	this->amount = amount;
}

char* Ingredient::getIngredientName()	//���� ��ȯ
{
	return ingredientName;
}

int Ingredient::getAmount()
{
	return amount;
}

void Ingredient::setName(char* name)
{
	this->ingredientName = name;
}

void Ingredient::setAmount(int amount)
{
	this->amount = amount;
}