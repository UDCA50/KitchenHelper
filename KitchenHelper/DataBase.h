#include"Recipe.h"
#include <vector>

class DataBase{
private:
	std::vector<Recipe> recipe;		//���� recipe����
	std::vector<Recipe> tempRecipe;  //��ġ ������ ���� �ӽ� ����
	int recipeCount;			//�丮�� ī��Ʈ

public:
	void showAllRecipes();							//��� ������ �����ֱ�
	//showRecipeList(recipe);

	char* ingredientSearch(char* search); 			//�˻��� ���ο� ���͵��� ���� : ������ temp

	char* ingredientResearch(char* research); 		//��˻� ���͵�� ����.

	char* dishSearch(char* search);      			//��ġ �� showNeedToReaserch();
	//1-> ����ġ �Լ� 2->�����Լ� 3-> return 4-> string ��ȯ

	char* dishResearch(char* research);			//��˻������� vector�� tempvecor���!


	void addRecipe();		//������ �߰�
	void modifyRecipe();	//������ ����
	void deleteRecipe();	//������ ����


	//������ ������ �ĵ�����.
	void modifyRecipeName();  							//�������̸�����
	//getRecipe().modifyDishName(char* )


	void modifyRecipeofDish(); 							//�����ǹ�� ����
	//getRecipe().modifyRecipeOfDish();
	//�� �ȿ��� ����


	void modifyIngredientName();						//�������� ���� ����
	void deleteIngredient();							//�������� ��� ����
	void modifyIngredientAmount();						//�������� ��ᷮ ����
	//��� ���� ���


	char* addToPlaner(std::vector<Recipe> list);				//��ġ���� 4���� ����������,
	//list�� �ٽ� �����ְ�(method��) ����� ������ �߰��ϰڳ�?
	// �׷��� ���õ� ��ȣ�� name, ��, char*��ȯ



	void showRecipeList(std::vector<Recipe> list); 			//������ ����Ʈ ���

	char* showNeedToDishReasearch();               		// <1.��˻� 2.���� 3.����back 4. �����߰�>		
	// "EnumDefinition.h"�� 1,2,3,4���Ǹ� �ϰ�
	// ����ϴٺ��� �ᱹ 2/3/4�� ���ѵ�
	// 2-> modifyRecipe 3-> return 4->char* ��ȯ 

	Recipe showRecipeOfDish(char* dishName);			//dishName�� �Ű������� �޾Ƽ�
	//getRecipe();
	Recipe getRecipe();

};
