#pragma once
#include"DataBase.h"

void DataBase::addRecipe() {
		char* makeNewRecipe;
		char* dicision = new char[4];
		cout << "�����Ǹ� �߰��մϴ�." << endl;
		cout << "�����Ǹ� ���� �޴����� �Է��ϼ��� : ";
		cin >> makeNewRecipe;
		Recipe myRecipe(makeNewRecipe);
		recipe.push_back(myRecipe);
		recipeCount++;
		//recipeCount ���� �����ϴ� Recipe ���� �����ϰ� �ٲپ���� 


		cout << "��Ḧ �߰��Ͻðڽ��ϱ�? Yes/No";
		cin >> dicision;
		if (strcmp(dicision,"Yes")){
			int exit = 0;
			char* name;
			int amount;
			cout << "������ -1�� �Է��ϸ� ����˴ϴ�." << endl;
			while(exit != -1){
				cout << "����� �̸�.(ex : ���� 60)" << endl;
				cin >> name;
				cout << ", ������ ���ʴ�� �Է��ϼ���" << endl;
				cin >> amount;
				recipe[recipeCount-1].ingredientAdd(name, amount);
				if (amount == -1){
					exit = -1;
				}
			}

		}
		else{ //�ϴ��� No�� �ԷµǸ� �ش� �Լ� exit
			return;
		}

		//recipe[recipeCount-1].recipeOfDishAdd(makeNewRecipe);
		//��recipe�� �ش� �Լ��� ������ ���� ����


	}											//������ �߰� ����
	//�̸��� �Է¹޾Ƽ� recipe[num].Recipe(name);
	//��Ḧ �߰��Ұ������� ���θ� ����� �߰��ϸ�
	//recipe[count].ingredientAdd(name, amount)!!<-�ݺ�
	//������ �߰� recipe[count].recipeOfDishAdd(recipeOfDish);

DataBase::DataBase(){
	recipeCount = 0;
}

void DataBase::modifyRecipe(){
	int wantResetNum;
	int resetMenuNum;
	char* resetDishName;
	int numberOfDish = 0;
	for (int i = 0; i< this->recipe.size(); i++){
		//showAllRecipeInformation(i);
		// ���Լ������� �ȵ�����
	}

	cout << "�����ϰ� ���� �������� ��ȣ�� �Է��ϼ��� :";
	cin >> wantResetNum;
	cout << "�����ϰ� ���� �޴��� �Է��ϼ���" << endl << "1.������ �̸� ����" << "2.��� ����" << endl << "3.������ ����";
	cin >> resetMenuNum;
	if (resetMenuNum == 1){
		cout << "�缳�� �� �������� �̸��� �Է��ϼ��� :";
		cin >> resetDishName;
		recipe[wantResetNum].setDishName(resetDishName);
	}
	else if (resetMenuNum == 2){
		int resetNum;
		for (int i = 0; i< this->recipe.size(); i++){
			cout << i << ". ";
			//cout << showIngredient(i) << endl
			//�� showIngredient() �� ������ ���� ����
		}

		cout << "������ ����� ��ȣ�� �Է��ϼ��� :";
		cin >> resetNum;
		//recipe[wantResetNum].IngredientModify(resetNum);
		//�� IngredientModify() �� ������ ���� ����
	}
	else if (resetMenuNum == 3){
		char* newRecipe;
		cout << "�ٽ� ������ �������� �Է��ϼ��� : ";
		cin >> newRecipe;
		recipe[resetMenuNum].setRecipeOfDish(newRecipe);
	}
	else{
		cout << "�߸��� �Է��Դϴ�." << endl;
	}
	
}
//������ ����
//��� ������ �̸� ��� for�� showAllRecipes();
//���° ���������� ����
//�̸��� ����(�ش� ������ �����ǿ� ���� ���� ��ü ���)
//1.�̸� ����-> recipe[num].setDishName(name)
//2.��� ����-> ���° ������� ����
//recipe[num].IngredientModify(ingredientnumber);
//3.������ ����-> recipe[num].setRecipeOfDish(recipeOfDish);


//show ����
void showAllRecipesList(){

}//��� �����Ǹ���Ʈ �����ֱ�


//������ method����
char* dishSearch(char* search){


}//��ġ �� showNeedToReaserch();

char* ingredientSearch(char* search){

}//��ġ �� showNeedToReasearch();

void deleteRecipe(int recipeNumber){


}//������ ����

