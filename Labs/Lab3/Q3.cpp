//3. Math Tutor
//Write a program that can be used as a math tutor for a young student. The program
//should display two random numbers (three digits) to be added, such as
// 247
//+129
//----
//The program should then pause while the student works on the problem. When the
//student is ready to check the answer, he or she can press a key and the program will
//display the correct solution:
// 247
//+129
//----
// 376

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main(){
	random_device rd;
	mt19937 gen(rd());
	int num1 = ((gen() % 900) + 100), num2 = ((gen() % 900) + 100), total;
	total = num1 + num2;

	cout << " " << num1 << endl;
	cout << "+" << num2 << endl;
	cout << "----";
	cin.get();
	cout << right << setw(4) << total;

	return 0;
}
