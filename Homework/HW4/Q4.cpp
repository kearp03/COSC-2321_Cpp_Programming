/**
 * 4. Prime Number List
 * Use the isPrime function that you wrote in the previous problem
 * in a program that stores a list of all the prime numbers from 1
 * through 100 in the file "primers.txt".
*/

#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int);

int main(){
	ofstream outfile;
	outfile.open("primers.txt");

	for(int i = 1; i <= 100; i++){
		if(isPrime(i)) outfile << i << endl;
	}

	outfile.close();
	return 0;
}

bool isPrime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0) return false;
	}
	return (num > 1) && true;
}
