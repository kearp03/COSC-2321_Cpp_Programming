/**
 * 3. Case Manipulator
 * Write a program with three functions: upper, lower, and reverse.
 * 		- The upper function should accept a pointer to a C-string as
 * 		an argument. It should step through each character in the string,
 * 		converting it to uppercase.
 * 		- The lower function, too, should accept a pointer to a
 * 		C-string as an argument. It should step through each character
 * 		in the string, converting it to lowercase.
 * 		- Like upper and lower, reverse should also accept a pointer
 * 		to a string.
 * As it steps through the string, it should test each character to
 * determine whether it is upper or lower- case. If a character is
 * uppercase, it should be converted to lowercase. Likewise, if a
 * character is low- ercase, it should be converted to uppercase. Test
 * the functions by asking for a string in function main, then passing
 * it to them in the following or- der: reverse, lower, and upper.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(char*);
void lower(char*);
void reverse(char*);

int main(){
	char cString[80];
	cout << "Enter a string: ";
	cin.getline(cString, 79, '\n');

	reverse(cString);
	cout << "Reverse: " << cString << endl;
	lower(cString);
	cout << "Lower  : " << cString << endl;
	upper(cString);
	cout << "Upper  : " << cString << endl;
}


void upper(char *string){
	for(int i = 0; string[i]; i++){
		if(isalpha(string[i]))
			string[i] = toupper(string[i]);
	}
}

void lower(char *string){
	for(int i = 0; string[i]; i++){
		if(isalpha(string[i]))
			string[i] = tolower(string[i]);
	}
}

void reverse(char *string){
	for(int i = 0; string[i]; i++){
		if(isalpha(string[i])){
			if(islower(string[i])){
				string[i] = toupper(string[i]);
			}
			else if(isupper(string[i])){
				string[i] = tolower(string[i]);
			}
		}
	}
}
