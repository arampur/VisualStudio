#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

template<typename T>
void display(const T& Input){
	for (auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
		cout << *iElement << "  " << endl;
}
int main(){
	vector<string> mylist;
	mylist.push_back("Amith");
	mylist.push_back("rampur");
	mylist.push_back("rishika");
	mylist.push_back("appaji");
	mylist.push_back("ajjiajja");
	mylist.push_back("ajjiajja");

	cout << "mylist elements..." << endl;
	display(mylist);

	cout << "contents of list after sorting..." << endl;
	/*sort(mylist.begin(), mylist.end());
	display(mylist);
	cout << endl;
*/
	sort(mylist.begin(), mylist.end());
	display(mylist);

	
	/*auto uniqsort = unique(mylist.begin(), mylist.end());
	mylist.erase(uniqsort, mylist.end());
	cout << "contents of list after unique sort..." << endl;
	display(mylist);
	return 0;*/
}