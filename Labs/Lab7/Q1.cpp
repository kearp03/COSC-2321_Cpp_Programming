#include <iostream>

using namespace std;

int mode(int*, int);

int main(){
	cout << "Enter the size of the array: ";
	int size; cin >> size;
	int vals[size];
	for(int i = 0; i < size; i++){
		cout << (i+1) << ": ";
		cin >> *(vals + i);
	}
	cout << "The mode is: " << mode(vals, size) << endl;
}

int mode(int* valsptr, int len){
	int mode = -1;

	for(int i = 0; i < len-1; i++){
		int count = 1, valsI = *(valsptr+i);
		for(int j = i+1; j < len; j++){
			if(valsI == *(valsptr+j)) count++;
		}

		if(count != 1 && count > mode) mode = valsI;
	}

	return mode;
}
