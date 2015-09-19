#include"Recipe.h"
#include <vector>

class DataBase{
private:
	std::vector<Recipe> recipe;		//실제 recipe벡터
	std::vector<Recipe> tempRecipe;  //서치 과정을 통한 임시 벡터
	int recipeCount;			//요리수 카운트

public:
	void showAllRecipes();							//모든 레시피 보여주기
	//showRecipeList(recipe);

	char* ingredientSearch(char* search); 			//검색된 새로운 벡터들의 조합 : 저장은 temp

	char* ingredientResearch(char* research); 		//재검색 벡터들로 시작.

	char* dishSearch(char* search);      			//서치 후 showNeedToReaserch();
	//1-> 리서치 함수 2->수정함수 3-> return 4-> string 반환

	char* dishResearch(char* research);			//재검색에서는 vector를 tempvecor사용!


	void addRecipe();		//레시피 추가
	void modifyRecipe();	//레시피 수정
	void deleteRecipe();	//레시피 삭제


	//레시피 수정ㅇ ㅔ들어갔을때.
	void modifyRecipeName();  							//레시피이름수정
	//getRecipe().modifyDishName(char* )


	void modifyRecipeofDish(); 							//레시피방법 수정
	//getRecipe().modifyRecipeOfDish();
	//그 안에서 수정


	void modifyIngredientName();						//레시피의 재료명 수정
	void deleteIngredient();							//레시피의 재료 삭제
	void modifyIngredientAmount();						//레시피의 재료량 수정
	//모두 위와 비슷


	char* addToPlaner(std::vector<Recipe> list);				//서치에서 4번을 선택했을때,
	//list를 다시 보여주고(method로) 어떤것을 일정에 추가하겠냐?
	// 그러면 선택된 번호의 name, 즉, char*반환



	void showRecipeList(std::vector<Recipe> list); 			//레시피 리스트 출력

	char* showNeedToDishReasearch();               		// <1.재검색 2.수정 3.메인back 4. 일정추가>		
	// "EnumDefinition.h"에 1,2,3,4정의를 하고
	// 계속하다보면 결국 2/3/4로 국한됨
	// 2-> modifyRecipe 3-> return 4->char* 반환 

	Recipe showRecipeOfDish(char* dishName);			//dishName를 매개변수로 받아서
	//getRecipe();
	Recipe getRecipe();

};
