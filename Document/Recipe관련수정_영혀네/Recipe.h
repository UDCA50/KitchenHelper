/*
 * �丮�� ���� �������� ����ִ� header.
 * Created by �ſ���/������/�ֿ�ȣ
 */

#include "Ingredient.h"
#include<vector>


class Recipe{

private:
	char* dishName;									//�丮��
	vector<Ingredient> ingredient;					//���
	int ingredientCount;							//����
	char*  recipeOfDish;							//�丮������
	
	int findNumberOfIngredient(char* name);			//���� ����� ��ȣ�� ��ȯ. (���° �������) 
													//�Ű����� ����
	
	char* getIngredientName(int ingredientNumber);							//���° ����� ������ ��ȯ
	void setIngredientName(char* name);										//���� ����� ������ ����
	void setIngredientName(char* name, int ingredientNumber);				//���� ����
																			//������ �Ű������� �� ingredientName ����
																			//setName()
	int getIngredientAmount(int ingredientNumber);							//���° ����� ��ᷮ�� ��ȯ.
	void setIngredientAmount(int amount);
	void setIngredientAmount(int amount,int ingredientNumber);			//���� ����� ��ᷮ�� ����(����)
										//���° �������� ��ȯ.

	void ingredientDelete(int ingredientNumber); 	//��� ����

	void showIngredient(int ingredientNumber);		//���° ��������� �����ֱ� ->getIngredientName/getIngredientAmount �̿�

public:
	Recipe(char* name);				//������
									//�丮���� �Է¹���
	char* getRecipedOfDish();

	//gt����
	char* getDishName();			//�丮�� ��� ->list ��¿� �ʿ�

	//set����
	void ingredientAdd(char* name, int amount);		//��� �߰�
													//�̸� ,�� set �̶� ingredientCount++;
	void setDishName(char* name);					//�丮�� �̸��� �Է�(����)
	void ingredientModify(int ingredientNumber);	//��� ����/����
													//����� ������ �Ű������� �޾Ƽ�
													//���� ����->setIngredientName, ��->setIngredientAmount
	void setRecipeOfDish(char* recipeOfDish);

	//show����
	void showAllRecipeInformation();	//dishName���, for������ ����/�� ������, recipeOfDish���
};