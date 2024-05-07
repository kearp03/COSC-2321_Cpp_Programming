#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void initValues(vector<string>&);
void initSuits(vector<string>&);
void onlyFace(vector<string>&);
void onlySuit(vector<string>&);
void both(vector<string>&, vector<string>&);

int myrandom(int i){ return rand()%i; }

int main(){
	srand((unsigned) time(0));
	vector<string> faceValues;
	vector<string> suits;
	initValues(faceValues);
	initSuits(suits);

	while(true){
		cout << "Welcome to the card guessing game!" << endl;
		cout << "Please choose one of the following options:" << endl;
		cout << "1: Guess only the face value of the card" << endl;
		cout << "2: Guess only the suit of the card" << endl;
		cout << "3: Guess both the face value and suit of the card" << endl;
		cout << "4: Quit" << endl << ": ";
		int choice; cin >> choice; cin.ignore(1, '\n');

		random_shuffle(faceValues.begin(), faceValues.end(), myrandom);
		random_shuffle(suits.begin(), suits.end(), myrandom);

		switch(choice){
		case(1):
			onlyFace(faceValues);
			break;
		case(2):
			onlySuit(suits);
			break;
		case(3):
			both(faceValues, suits);
			break;
		case(4):
			exit(0);
		default:
			cout << "Invalid option, please choose again." << endl;
		}
		cout << endl;
	}
}

void initValues(vector<string>& vals){
	vals.push_back("A");
	vals.push_back("2");
	vals.push_back("3");
	vals.push_back("4");
	vals.push_back("5");
	vals.push_back("6");
	vals.push_back("7");
	vals.push_back("8");
	vals.push_back("9");
	vals.push_back("10");
	vals.push_back("jack");
	vals.push_back("queen");
	vals.push_back("king");
}

void initSuits(vector<string>& suits){
	suits.push_back("diamonds");
	suits.push_back("hearts");
	suits.push_back("spades");
	suits.push_back("clubs");
}

void onlyFace(vector<string>& faceValues){
	int card = rand()%13;
	string cardGuess;
	cout << "Enter your guess for the card value: "; getline(cin, cardGuess);
	if(cardGuess == faceValues[card]){
		cout << "That\'s correct! The card was a ";
	}
	else{
		cout << "Sorry, that\'s not right. The card was a ";
	}
	cout << faceValues[card] << endl;
}

void onlySuit(vector<string>& suits){
	int suit = rand()%4;
	string suitGuess;
	cout << "Enter your guess for the suit: "; getline(cin, suitGuess);
	if(suitGuess == suits[suit]){
		cout << "That\'s correct! The card was a ";
	}
	else{
		cout << "Sorry, that\'s not right. The card was a ";
	}
	cout << " of " << suits[suit] << endl;
}

void both(vector<string>& faceValues, vector<string>& suits){
	int card = rand()%13, suit = rand()%4;
	string cardGuess, suitGuess;
	cout << "Enter your guess for the card value: "; getline(cin, cardGuess);
	cout << "Enter your guess for the suit: "; getline(cin, suitGuess);
	if(cardGuess == faceValues[card] && suitGuess == suits[suit]){
		cout << "That\'s correct! The card was a ";
	}
	else{
		cout << "Sorry, that\'s not right. The card was a ";
	}
	cout << faceValues[card] << " of " << suits[suit] << endl;
}
