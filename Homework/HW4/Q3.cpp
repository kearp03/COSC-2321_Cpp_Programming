/**
 * 3. isPrime Function
 * A prime number is a number that is only evenly divisible by itself
 * and 1. For example, the number 5 is prime because it can only be
 * evenly divided by 1 and 5. The number 6, however, is not prime
 * because it can be divided evenly by 1, 2, 3, and 6. Write a
 * function name isPrime , which takes an integer as an argument
 * and returns true if the argument is a prime number, or false
 * otherwise. Demonstrate the function in a complete program.
 * Tip: Recall that the % operator divides one number by another,
 * and returns the remainder of the division. In an expression
 * such as num1 % num2 , the % operator will return 0 if num1 is
 * evenly divisible by num2.
*/

#include <iostream>

using namespace std;

bool isPrime(int);

int main(){
	int n;
	cout << "Enter an positive integer (enter 0 to stop): ";
	cin >> n;
	while(n != 0){
		cout << n << (isPrime(n) ? " is a prime" : " is not a prime") << endl;
		cout << "Enter an positive integer (enter 0 to stop): ";
		cin >> n;
	}
	return 0;
}

bool isPrime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0) return false;
	}
	return (num > 1) && true;
}
