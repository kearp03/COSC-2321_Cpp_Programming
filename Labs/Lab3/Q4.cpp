//4. Book Club Points
//Serendipity Booksellers has a book club that awards points to its customers based on
//the number of books purchased each month. The points are awarded as follows:
//• If a customer purchases 0 books, he or she earns 0 points.
//• If a customer purchases 1 book, he or she earns 5 points.
//• If a customer purchases 2 books, he or she earns 15 points.
//• If a customer purchases 3 books, he or she earns 30 points.
//• If a customer purchases 4 or more books, he or she earns 60 points.
//Write a program that asks the user to enter the number of books that he or she has
//purchased this month and then displays the number of points awarded.

#include <iostream>

using namespace std;

int main(){
	int books;

	cout << "Enter the number of books you purchased: ";
	cin >> books;
	if(books >= 0){
		switch(books){
		case(0):
			cout << "You earned 0 points";
			break;
		case(1):
			cout << "You earned 5 points";
			break;
		case(2):
			cout << "You earned 15 points";
			break;
		case(3):
			cout << "You earned 15 points";
			break;
		default:
			cout << "You earned 60 points";
		}
	}
	else{
		cout << "Error: Input cannot be negative";
	}
	return 0;
}
