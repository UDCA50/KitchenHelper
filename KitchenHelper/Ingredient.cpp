/*
 * Ingredient Method 구현
 * Created by 신영현/남성준/최연호
 */
#include "Ingredient.h"

Ingredient::Ingredient(char* name, int amount)
{
	this->ingredientName = name;
	this->amount = amount;
}

char* Ingredient::getIngredientName()	//재료명 반환
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