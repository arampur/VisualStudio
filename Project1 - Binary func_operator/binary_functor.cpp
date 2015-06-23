#include<iostream>
#include<vector>
#include "binary2.h"
using namespace std;

template<typename T>
void displayitems(const T& Input){
	for (auto Element = Input.begin(); Element != Input.end(); ++Element)
		cout << *Element << " ";
	cout << endl;
}


int main(){	
	vector<string> myvector;
	myvector.push_back("Amith");
	myvector.push_back("Rampur");
	myvector.push_back("Akshath");

	cout << "Vector elements.." << endl;
	displayitems(myvector);

	cout << "sorting using default sort standards..." << endl;
	sort(myvector.begin(), myvector.end());
	displayitems(myvector);

	cout << "sorting using predicate.." << endl;
	sort(myvector.begin(), myvector.end(), stringchangecase());
	displayitems(myvector);
	return 0;
	
}