#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int findvowels(string & strInput, char character){
	int numofvowels = 0;
	size_t substring = strInput.find(character);
	while (substring != string::npos){
		++numofvowels;
		substring = strInput.find(character, substring + 1);
	}
	return numofvowels;
}
int main(){
	cout << "Enter the string.." << endl;
	string mystr;
	getline(cin, mystr);
	int numofvowels = findvowels(mystr, 'a');
	numofvowels += findvowels(mystr, 'e');
	numofvowels += findvowels(mystr, 'i');
	numofvowels += findvowels(mystr, 'o');
	numofvowels += findvowels(mystr, 'u');

	cout << " Number of vowels in the sentence : " << numofvowels;
	return 0;
}