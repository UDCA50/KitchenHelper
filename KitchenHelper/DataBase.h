#include "Recipe.h"

class DataBase{
private:
	vector<Recipe> recipe;		//���� recipe����
	vector<Recipe> tempRecipe;  //��ġ ������ ���� �ӽ� ����
	int recipeCount;			//�丮�� ī��Ʈ


	void showNeedToDishReasearch();               		// <1.��˻� 2.���� 3.����back 4. �����߰�>		
														// "EnumDefinition.h"�� 1,2,3,4���Ǹ� �ϰ�
public:
	DataBase();				//������

	//set����
	void addRecipe();							//������ �߰� ����
												//�̸��� �Է¹޾Ƽ� recipe[num].setDishName(name);
												//��Ḧ �߰��Ұ������� ���θ� ����� �߰��ϸ�
												//recipe[count].ingredientAdd(name, amount)!!<-�ݺ�
												//������ �߰� recipe[count].recipeOfDishAdd(recipeOfDish);

	void modifyRecipe();				//������ ����
										//��� ������ �̸� ��� for�� showAllRecipes();
										//���° ���������� ����
										//�̸� ����-> recipe[num].setDishName(name)
										//��� ����-> ���° ������� ����
										//recipe[num].IngredientModify(ingredientnumber);
										//������ ����-> recipe[num].setRecipeOfDish(recipeOfDish);


	//show ����
	void showAllRecipesList();							//��� �����Ǹ���Ʈ �����ֱ�
	

	//������ method����
	char* dishSearch(char* search);      			//��ġ �� showNeedToReaserch();
													
	char* ingredientSearch(char* search); 			//��ġ �� showNeedToReasearch();

	void deleteRecipe(int recipeNumber);			//������ ����


	/*
	Recipe showRecipeOfDish(char* dishName);			//dishName�� �Ű������� �޾Ƽ�
	//getRecipe();
	Recipe getRecipe();*/ //������

};
