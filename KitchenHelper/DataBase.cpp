#pragma once
#include"DataBase.h"

void DataBase::addRecipe() {
		char* makeNewRecipe;
		char* dicision = new char[4];
		cout << "레시피를 추가합니다." << endl;
		cout << "레시피를 만들 메뉴명을 입력하세요 : ";
		cin >> makeNewRecipe;
		Recipe myRecipe(makeNewRecipe);
		recipe.push_back(myRecipe);
		recipeCount++;
		//recipeCount 값을 수정하는 Recipe 값과 동일하게 바꾸어야함 


		cout << "재료를 추가하시겠습니까? Yes/No";
		cin >> dicision;
		if (strcmp(dicision,"Yes")){
			int exit = 0;
			char* name;
			int amount;
			cout << "수량을 -1을 입력하면 종료됩니다." << endl;
			while(exit != -1){
				cout << "재료의 이름.(ex : 마늘 60)" << endl;
				cin >> name;
				cout << ", 수량을 차례대로 입력하세요" << endl;
				cin >> amount;
				recipe[recipeCount-1].ingredientAdd(name, amount);
				if (amount == -1){
					exit = -1;
				}
			}

		}
		else{ //일단은 No가 입력되면 해당 함수 exit
			return;
		}

		//recipe[recipeCount-1].recipeOfDishAdd(makeNewRecipe);
		//★recipe에 해당 함수가 구현되 있지 않음


	}											//레시피 추가 영역
	//이름을 입력받아서 recipe[num].Recipe(name);
	//재료를 추가할것인지의 여부를 물어본뒤 추가하면
	//recipe[count].ingredientAdd(name, amount)!!<-반복
	//조리법 추가 recipe[count].recipeOfDishAdd(recipeOfDish);

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
		// ★함수구현이 안되있음
	}

	cout << "수정하고 싶은 레시피의 번호를 입력하세요 :";
	cin >> wantResetNum;
	cout << "수정하고 싶은 메뉴를 입력하세요" << endl << "1.레시피 이름 수정" << "2.재료 수정" << endl << "3.조리법 수정";
	cin >> resetMenuNum;
	if (resetMenuNum == 1){
		cout << "재설정 할 레시피의 이름을 입력하세요 :";
		cin >> resetDishName;
		recipe[wantResetNum].setDishName(resetDishName);
	}
	else if (resetMenuNum == 2){
		int resetNum;
		for (int i = 0; i< this->recipe.size(); i++){
			cout << i << ". ";
			//cout << showIngredient(i) << endl
			//★ showIngredient() 가 구현되 있지 않음
		}

		cout << "수정할 재료의 번호를 입력하세요 :";
		cin >> resetNum;
		//recipe[wantResetNum].IngredientModify(resetNum);
		//★ IngredientModify() 가 구현되 있지 않음
	}
	else if (resetMenuNum == 3){
		char* newRecipe;
		cout << "다시 설정할 조리법을 입력하세요 : ";
		cin >> newRecipe;
		recipe[resetMenuNum].setRecipeOfDish(newRecipe);
	}
	else{
		cout << "잘못된 입력입니다." << endl;
	}
	
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

