#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	cout << "Enter the string to be checked for palindrome.." << endl;
	cout << "> ";
	string sample;
	getline(cin, sample);
	cout << "string1 before reversing.." << endl;;
	cout << sample<<endl;
	string sample2(sample);
	cout << "String2 now contains.." << endl;
	cout<< sample2 << endl;
	reverse(sample.begin(), sample.end());
	cout << "String 1 after reversing.." << endl;
	cout << sample << endl;
	if (sample == sample2)
		cout << "Palindrome.." << endl;
	else
		cout << "Not a palindrome.." << endl;
	return 0;
}