#include <iostream>
#include<string>

using namespace std;

string toWords(int num) {
	if (num > 100 || num < 1) {
		throw "unsupported";
	}
	if (num == 100) {
		return "one hundred";
	}

	const string kSpecialCases[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	if (num >=10  && num <= 19) {
		return kSpecialCases[num - 10];
	}

	const string kOnesPlaces[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	const string kTensPlaces[] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	if (num < 10) {
		return kOnesPlaces[num - 1];
	}
	else if (num % 10 == 0) {
		return kTensPlaces[num / 10 - 2];
	}
	else {
		return kTensPlaces[num / 10 - 2] + " " + kOnesPlaces[num % 10 - 1];
	}
}

int main() {
	cout << "Enter the number to be converted into words.." << endl;
	int number;
	cin >> number;
	cout << toWords(number) << endl;
	return 0;
}
