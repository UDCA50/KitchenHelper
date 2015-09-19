#include "Ingredient.h"
#include<vector>


class Recipe{

private:
	char* dishName; //요리
	std::vector<Ingredient> ingredient; //재료
	int ingredientCount;  //재료수
	char*  recipeOfDish; //요리조리법
	
	int findNumberOfIngredient();	//현재 재료의 갯수를 반환 
	int getIngredientAmount(int ingredientNumber);
	char* getIngredientName(int ingredientNumber);
	void setIngredientName(char* name);
	void setIngredientAmount(int amount);


public:
	void setDishName(char* name);		//요리의 이름을 입력
	
	void ingredientAdd(char* name, int Amount);    //재료 추가
	//이름 ,양 set

	void ingredientModify(); //재료 수정

	void modifyDishName(char* name); 	//요리명 수정
	//name을 매개변수로 얻어서 dishName을 수정

	void modifyIngredientName(char* name);	//재료명 수정
	//재료명을 매개변수로 얻어서 ingredientName 수정
	//setName()

	void ingredientDelete(char* name); 	//재료 삭제
	//재료명을 매개변수로 얻어서 재료 삭제
	void setRecipeOfDish(char* recipeOfDish);	//조리법 set
	char* getRecipeOfDish(); 		//조리법반환
	void modifyRecipeOfDish();

	char* getDishName(); //요리명 얻기 ->list 출력에 필요

	void showAllRecipeInformation();	//dishName출력, for문으로 재료명/량 모두출력, recipeOfDish출력


};