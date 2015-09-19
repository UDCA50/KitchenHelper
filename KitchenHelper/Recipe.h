#include "Ingredient.h"
#include<vector>


class Recipe{

private:
	char* dishName; //�丮
	std::vector<Ingredient> ingredient; //���
	int ingredientCount;  //����
	char*  recipeOfDish; //�丮������
	
	int findNumberOfIngredient();	//���� ����� ������ ��ȯ 
	int getIngredientAmount(int ingredientNumber);
	char* getIngredientName(int ingredientNumber);
	void setIngredientName(char* name);
	void setIngredientAmount(int amount);


public:
	void setDishName(char* name);		//�丮�� �̸��� �Է�
	
	void ingredientAdd(char* name, int Amount);    //��� �߰�
	//�̸� ,�� set

	void ingredientModify(); //��� ����

	void modifyDishName(char* name); 	//�丮�� ����
	//name�� �Ű������� �� dishName�� ����

	void modifyIngredientName(char* name);	//���� ����
	//������ �Ű������� �� ingredientName ����
	//setName()

	void ingredientDelete(char* name); 	//��� ����
	//������ �Ű������� �� ��� ����
	void setRecipeOfDish(char* recipeOfDish);	//������ set
	char* getRecipeOfDish(); 		//��������ȯ
	void modifyRecipeOfDish();

	char* getDishName(); //�丮�� ��� ->list ��¿� �ʿ�

	void showAllRecipeInformation();	//dishName���, for������ ����/�� ������, recipeOfDish���


};