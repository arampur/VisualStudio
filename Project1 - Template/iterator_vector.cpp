#include<iostream>
#include<cctype>
#include<vector>

using namespace std;

int main() {
	vector<char> v(10);
	vector<char>::iterator p; //defining the iterator
	int i;
	p = v.begin();
	i = 0;
	while (p != v.end()) {
		*p = i + 'a';
		p++;
		i++;
	}

	//display contents of the array
	cout << "originial contents of array..." << endl;
	p = v.begin();
	while (p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n \n";

	//modifying the contents of array
	p = v.begin();
	while (p != v.end()) {
		*p = toupper(*p);
		p++;
	}
	cout << "modified array..." << endl;
	p = v.begin();
	while (p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;
	return 0;
}
