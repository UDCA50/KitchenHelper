#pragma once
#include"DataBase.h"



DataBase::DataBase(){
	
	void addRecipe(){
		char* makeNewRecipe;
		char* dicision;
		cout<<"�����Ǹ� �߰��մϴ�."<<endl;
		cout<<"�����Ǹ� ���� �޴����� �Է��ϼ��� : ";
		cin>>makeNewRecipe;
		recipe[recipeCount].Recipe(makeNewRecipe);
		cout<<"��Ḧ �߰��Ͻðڽ��ϱ�? Yes/No";
		cin<<dicision;
		if(strcmp(disicion) == "Yes"){
			int exit=0;
			char* name
			int amount;
			cout<<"-1�� �Է��ϸ� ����˴ϴ�."<<endl;
			for(exit!=-1){
				cout<<"����� �̸�, ������ ���ʴ�� �Է��ϼ���.(ex : ���� 60)";
				cin>>name amount;
				recipe[recipeCount].ingredientAdd(name, amount);
				if(name == -1){
					exit = -1;
				}
			}
				
		}
		else{ //�ϴ��� No�� �ԷµǸ� �ش� �Լ� exit
			return 0;
		}
		
		recipe[recipeCount].recipeOfDishAdd(makeNewRecipe);
	}											//������ �߰� ����
												//�̸��� �Է¹޾Ƽ� recipe[num].Recipe(name);
												//��Ḧ �߰��Ұ������� ���θ� ����� �߰��ϸ�
												//recipe[count].ingredientAdd(name, amount)!!<-�ݺ�
												//������ �߰� recipe[count].recipeOfDishAdd(recipeOfDish);

	void modifyRecipe(){
		int wantResetNum;
		int resetMenuNum;
		char* resetDishName;
		int numberOfDish=0;
		for(i=0;i<ingredient.size();i++){
			showAllRecipeInformation(i);
		}	
			cout<<"�����ϰ� ���� �������� ��ȣ�� �Է��ϼ��� :";
			cin>>wantResetNum;
			cout<<"�����ϰ� ���� �޴��� �Է��ϼ���"<<endl<<"1.������ �̸� ����"<<"2.��� ����"<<endl<<"3.������ ����"; 
			cin>>resetMenuNum;
			if(resetMenuNum == 1){
				cout<<"�缳�� �� �������� �̸��� �Է��ϼ��� :";
				cin>>resetDishName;
				recipe[wantResetNum].setDishName(resetDishName);
			}
			else if(resetMenuNum == 2){
				resetNum;
				for(i=0;i<ingredient.size();i++){
					cout<<i". "<<showIngredient(i)<<endl;
				}
				
				cout<<"������ ����� ��ȣ�� �Է��ϼ��� :";
				cin>>resetNum;
				recipe[wantResetNum].IngredientModify(resetNum);
			}
			else if(resetMenuNum == 3){
				char* newRecipe;
				cout<<"�ٽ� ������ �������� �Է��ϼ��� : ";
				cin>>newRecipe;
				recipe[resetMenuNum].setRecipeOfDish(newRecipe);
			}
			else{
				cout<<"�߸��� �Է��Դϴ�."<<endl;
			}

			recipe[wantResetNum].
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

}
