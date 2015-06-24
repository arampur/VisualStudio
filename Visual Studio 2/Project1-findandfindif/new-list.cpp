#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

int main(){
	list<string> mylist;
	mylist.push_back("Amith");
	mylist.push_back("rampur");
	mylist.push_back("rishika");
	mylist.push_back("appaji");
	mylist.push_back("ajjiajja");
	mylist.push_back("ajjiajja");

	cout << "mylist elements..." << endl;
	for_each(mylist.begin(), mylist.end(), [](int& item) { cout << item << "  "; });
	cout << endl;

	cout << "contents of list after sorting..." << endl;
	sort(mylist.begin(), mylist.end());
	for_each(mylist.begin(), mylist.end(), [](int& item) { cout << item << "  "; });
	cout << endl;

	cout << "contents of list after unique sort..." << endl;
	auto uniqsort = unique(mylist.begin(), mylist.end());
	mylist.erase(uniqsort, mylist.end());
	for_each(mylist.begin(), mylist.end(), [](int& item) { cout << item << "  "; });
	return 0;
}