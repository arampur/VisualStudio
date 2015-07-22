#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//program to understand all operations in string...
int main(){
	cout << "Enter your string: " << endl;
	string mystring;
	getline(cin, mystring);
	cout << "You entered: ";
	cout << mystring << endl;
	cout << "\n";
	
	//copying one string to another
	string string2(mystring);
	cout << "Second string after copying from the sample string is now : " << endl;
	cout << string2 << endl;
	cout << "\n";
	
	//finding substring in sample string
	cout << "Finding occurence of day in the sample string.." << endl;
	size_t substring = mystring.find("day", 0);
	if (substring != string::npos)
		cout << "substring '\day\'" << " was found in the sample string" << endl;
	else
		cout << "string you are looking for not in sample string.." << endl;
	cout << "\n";
	
	//finding all occurences of day in sample string
	string findstr;
	cout << "enter the string you want to find.." << endl;
	getline(cin, findstr);
	cout << "finding all occurences of  "<<findstr<<" in sample string.." << endl;
	size_t findall = mystring.find(findstr, 0);
	while (findall != string::npos){
		cout << "string " << findstr << " was found in the sample string" << endl;
		size_t stringposition = findall + 1;
		findall = mystring.find(findall, stringposition);
	}
	cout << "\n";

	string newstring;
	cout << "concatenating sample string to new string.." << endl;
	newstring.append(mystring);
	cout << newstring << endl;
	cout << "\n";
	
	//reversing the contents of the string
	cout << "reversing the contents of the new string.." << endl;
	reverse(newstring.begin(), newstring.end());
	cout << "After reversing contents: " << newstring << endl;
	cout << "\n";

	//comparing two string
	if (mystring == string2)
		cout << "strings " << mystring <<" and "<< string2<<" are equal" << endl;
	else
		cout << "strings are not equal" << endl;
	cout << "\n";

	//transforming to upper case
	transform(newstring.begin(), newstring.end(), newstring.begin(), toupper);
	cout << "After conversion to uppercase, the new string is now : " << newstring << endl;
	cout << "\n";

	//erasing string contents
	string2.erase();
	if (string2.empty())
		cout << "second string is empty..." << endl;
	return 0;
}