#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

int main(){
	using namespace std;
	cout << "Enter the string.." << endl;
	cout << "> ";
	string strsample;
	getline(cin, strsample);
	for (size_t charpos = 0; charpos < strsample.length(); charpos += 2)
		strsample[charpos] = toupper(strsample[charpos]);
	cout << "String to uppercase: " << endl;
	cout << strsample << endl;
	return 0;
}