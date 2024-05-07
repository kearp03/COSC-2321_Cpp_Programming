/**
 * 4. Fat Gram Calculator
 * Write a program that asks for the number of calories and fat grams in a food.
 * The program should display the percentage of calories that come from fat.
 * If the calories from fat are less than 30% of the total calories of the food,
 * it should also display a message indicating that the food is low in fat.
 * One gram of fat has 9 calories, so Calories from fat = fat grams * 9
 * The percentage of calories from fat can be calculated as: Calories from fat ÷ total calories
 * Input Validation: Make sure the number of calories and fat grams are not less than 0.
 * Also, the number of calories from fat cannot be greater than the total number of calories.
 * If that happens, display an error message indicating that either the calories or fat
 * grams were incorrectly entered.
*/

#include <iostream>
#include <iomanip>

using namespace std;

bool validate(int num){
	if(num < 0){
		cout << "Number entered cannot be less than 0" << endl;
		return true;
	}
	return false;
}

int main(){
	int calories, fatGrams, fatCalories;
	double percentFat;

	cout << setprecision(2) << fixed;

	do{
		cout << "Enter the total calories: ";
		cin >> calories;
	}while(validate(calories));

	do{
		cout << "Enter how many grams of fat: ";
		cin >> fatGrams;
	}while(validate(fatGrams));

	fatCalories = fatGrams * 9;

	if(fatCalories < calories){
		percentFat = 1.0 * fatCalories/calories;
		cout << percentFat*100 << "% of the calories comes from fat" << endl;
		if(percentFat < 0.3) cout << "This product is low in fat" << endl;
	}
	else{
		cout << "ERROR: calories from fat exceeds total calories" << endl;
		cout << "Either the calories or fat grams were incorrectly entered" << endl;
	}

	return 0;
}
