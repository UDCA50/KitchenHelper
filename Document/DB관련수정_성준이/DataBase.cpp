#pragma once
#include"DataBase.h"



DataBase::DataBase(){
	
	void addRecipe(){
		char* makeNewRecipe;
		char* dicision;
		cout<<"레시피를 추가합니다."<<endl;
		cout<<"레시피를 만들 메뉴명을 입력하세요 : ";
		cin>>makeNewRecipe;
		recipe[recipeCount].Recipe(makeNewRecipe);
		cout<<"재료를 추가하시겠습니까? Yes/No";
		cin<<dicision;
		if(strcmp(disicion) == "Yes"){
			int exit=0;
			char* name
			int amount;
			cout<<"-1을 입력하면 종료됩니다."<<endl;
			for(exit!=-1){
				cout<<"재료의 이름, 수량을 차례대로 입력하세요.(ex : 마늘 60)";
				cin>>name amount;
				recipe[recipeCount].ingredientAdd(name, amount);
				if(name == -1){
					exit = -1;
				}
			}
				
		}
		else{ //일단은 No가 입력되면 해당 함수 exit
			return 0;
		}
		
		recipe[recipeCount].recipeOfDishAdd(makeNewRecipe);
	}											//레시피 추가 영역
												//이름을 입력받아서 recipe[num].Recipe(name);
												//재료를 추가할것인지의 여부를 물어본뒤 추가하면
												//recipe[count].ingredientAdd(name, amount)!!<-반복
												//조리법 추가 recipe[count].recipeOfDishAdd(recipeOfDish);

	void modifyRecipe(){
		int wantResetNum;
		int resetMenuNum;
		char* resetDishName;
		int numberOfDish=0;
		for(i=0;i<ingredient.size();i++){
			showAllRecipeInformation(i);
		}	
			cout<<"수정하고 싶은 레시피의 번호를 입력하세요 :";
			cin>>wantResetNum;
			cout<<"수정하고 싶은 메뉴를 입력하세요"<<endl<<"1.레시피 이름 수정"<<"2.재료 수정"<<endl<<"3.조리법 수정"; 
			cin>>resetMenuNum;
			if(resetMenuNum == 1){
				cout<<"재설정 할 레시피의 이름을 입력하세요 :";
				cin>>resetDishName;
				recipe[wantResetNum].setDishName(resetDishName);
			}
			else if(resetMenuNum == 2){
				resetNum;
				for(i=0;i<ingredient.size();i++){
					cout<<i". "<<showIngredient(i)<<endl;
				}
				
				cout<<"수정할 재료의 번호를 입력하세요 :";
				cin>>resetNum;
				recipe[wantResetNum].IngredientModify(resetNum);
			}
			else if(resetMenuNum == 3){
				char* newRecipe;
				cout<<"다시 설정할 조리법을 입력하세요 : ";
				cin>>newRecipe;
				recipe[resetMenuNum].setRecipeOfDish(newRecipe);
			}
			else{
				cout<<"잘못된 입력입니다."<<endl;
			}

			recipe[wantResetNum].
		}
								//레시피 수정
										//모든 레시피 이름 출력 for문 showAllRecipes();
										//몇번째 레시피인지 묻고
										//이름과 재료명(해당 선택한 레시피에 대한 정보 전체 출력)
										//1.이름 수정-> recipe[num].setDishName(name)
										//2.재료 수정-> 몇번째 재료인지 묻고
										//recipe[num].IngredientModify(ingredientnumber);
										//3.조리법 수정-> recipe[num].setRecipeOfDish(recipeOfDish);


	//show 영역
	void showAllRecipesList(){
		
	}//모든 레시피리스트 보여주기
	

	//실질적 method영역
	char* dishSearch(char* search){
		
		
	}//서치 후 showNeedToReaserch();
													
	char* ingredientSearch(char* search){
		
	}//서치 후 showNeedToReasearch();

	void deleteRecipe(int recipeNumber){
		
		
	}//레시피 삭제

}
