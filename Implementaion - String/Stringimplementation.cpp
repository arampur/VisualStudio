#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	cout << "Enter the string to be checked for palindrome.." << endl;
	cout << "> ";
	string sample;
	getline(cin, sample);
	string sample2(sample);
	reverse(sample2.begin(), sample2.end());
	if (sample2 == sample)
		cout << sample << " is a palindrome.." << endl;
	else
		cout << sample << " is not a palindrome.." << endl;
	return 0;
}