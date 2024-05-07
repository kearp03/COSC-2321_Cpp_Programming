#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string wordSeperator(string&);

int main(){
	string sen;
	cout << "Enter a sentence without spaces but start each word with a capital letter\n: ";
	getline(cin, sen);

	wordSeperator(sen);

	cout << "Revised sentence:\n" << sen << endl;
}

string wordSeperator(string &sentence){
	for(int i = 1; i < sentence.length(); i++){
		if(isupper(sentence[i])){
			sentence[i] = tolower(sentence[i]);
			sentence.insert(i++, " ");
		}
	}
	return sentence;
}
