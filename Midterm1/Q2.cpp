#include <iostream>

using namespace std;

//function prototype
void fun(short, short, short, short&);

int main(){
	//declares short variable to pass by reference
	short x;
	//calls the function fun using 15, 5, 30, and x as the reference variable
	fun(15, 5, 30, x);
	//displays x after the function
	cout << "x = " << x << endl;
	return 0;
}

void fun(short a, short b, short c, short &d){
	//assigns value to d which is reflected where the function is called; ie the variable x
	d = a * b + c;
}
