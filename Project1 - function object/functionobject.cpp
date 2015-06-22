#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

template <typename TypeOfElement>
struct displayelement{
	void operator()(const TypeofElement&  Element) const{
		cout << Element << " ";
	}
};

int main(){
	vector<int> myvector;
	list<char>mylist;
	int number;
	cout << "Enter the number of elements to be inserted in to the vector.." << endl;
	cin >> number;
	for (int ncount = 0; ncount < number; ++ncount)
		myvector.push_back(ncount);
	//Displaying vector elements using unary function...
	cout << "Displaying vector elements.." << endl;
	for_each(myvector.begin(), myvector.end(), displayelement <int>());

	for (int nchar = 'a'; nchar < 'k'; ++nchar)
		mylist.push_back(nchar);
	cout << "Displaying list elements using unary function.." << endl;
	for_each(mylist.begin(), mylist.end(), displayelement<char>());

	cout << "displaying list elements using lambda expression in reverse order.." << endl;
	for_each(mylist.end(), mylist.begin(), [](int &Element) { cout << "Element"; });

	return 0;
}