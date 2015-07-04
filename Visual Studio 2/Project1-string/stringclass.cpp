#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	cout << "Enter the sample string: " << endl;
	string mystring;
	getline(cin, mystring);
	//searching for particular keyword in string..
	string findstring;
	cout << "Enter the string you want to find: " << endl;
	cin >> findstring;
	size_t substring = mystring.find(findstring, 0);
	if (substring != string::npos)
		cout << "substring was found at the position : " << substring << endl;
	else
		cout << "substring was not found.." << endl;
	cout << "\n";
	//finding all occurence of given string
	size_t substringpos = mystring.find(findstring, 0);
	cout << "finding all occurences of " << findstring << " in the sample string.." << endl;
	while (substringpos != string::npos){
		cout << "substring was found at position : " << substringpos << endl;

		size_t searchposition = substringpos + 1;
		substringpos = mystring.find(findstring, searchposition);
	}

	cout << "reversing contents of the string: ";
	reverse(mystring.begin(), mystring.end());
	cout << "\n";
	cout << "After reversing the string : " << endl;
	cout << "\n";
	transform(mystring.begin(), mystring.end(), mystring.begin(),toupper);
	cout << "After changing the case of the string : " << endl;
	cout << mystring << endl;
	return 0;
}