#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//find vowels in the string
int findvowels(string& input, char character){
	size_t findvowel = input.find(character);
	int numbovowels = 0;
	while (findvowel != string::npos){
		++numbovowels;
		findvowel = input.find(input, findvowel + 1);
	}
	return numbovowels;
}

int main(){
	string mystring;
	cout << "Enter the string.." << endl;
	getline(cin, mystring);
	cout << endl;
	//copying a string
	cout << "String: " << mystring << endl;
	string sample1(mystring);
	cout << "Sample string is now: " << endl;
	cout << sample1 << endl;

	//another way of copying a string
	const char * newstring = "Hello";
	char *copy = new char[strlen(newstring) + 1];
	strcpy_s(copy, 100, newstring);
	cout << "Another way of copying.." << endl;
	cout << copy << endl;
	delete[] copy;

	//string concatenation
	string sample2;
	sample2.append(sample1);
	cout << "Concatenated string: " << endl;
	cout << "string sample 2: "<<sample2 << endl;

	//reversing string
	cout << "reversing sample2 string: " << endl;
	reverse(sample2.begin(), sample2.end());
	cout << "sample2 string is now: " << sample2 << endl;

	//finding one particular occurence of string
	size_t findoneoccurence = sample1.find("day", 0);
	while (findoneoccurence != string::npos){
		cout << "\"day\" found at position" << findoneoccurence << endl;
		size_t searchposition = findoneoccurence + 1;
		findoneoccurence = sample1.find("day", searchposition);
	}

	cout << "converting string to upper and lowercase: " << endl;
	transform(sample1.begin(), sample1.end(), sample1.begin(), tolower);
	cout << sample1 << endl;
	transform(sample1.begin(), sample1.end(), sample1.begin(), tolower);
	cout << sample1 << endl;

	//finding vowels in string sample
	int totalvowels;
	cout << "finding total number of vowels in mystring...." << endl;
	totalvowels = findvowels(mystring, 'a');
	totalvowels += findvowels(mystring, 'e');
	totalvowels += findvowels(mystring, 'i');
	totalvowels += findvowels(mystring, 'o');
	totalvowels += findvowels(mystring, 'u');
	cout << "total number of vowels in mysting: " << totalvowels << endl;
	string sample3(sample2);
	cout << "sample3 string is now: " << endl;
	cout << sample3 << endl;
	size_t onecontent = sample3.find("to", 0);
	cout << "erasing \"to\" from the sample3 string : " << endl;
	cout << sample3 << endl;
	
	//erasing contents of sample3 string
	cout << "erasing all contents of the string..." << endl;
	sample3.erase(sample3.begin(), sample3.end());
	sample3.erase(onecontent);

	if (sample3.empty())
		cout << "string sample3 is empty.." << endl;
	return 0;
}