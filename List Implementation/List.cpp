//program to sort and reverse list of strings
#include<iostream>
#include<list>
#include<string>
#include<vector>

using namespace std;
template<class T>
void displaylistelements(const T& Input){
	for (auto Element = Input.begin(); Element != Input.end(); ++Element)
		cout << *Element << " ";
	cout << endl;
}

//sorting list elements
bool sortinglist(const string& first, const string& second){
	return(first > second);
}

int main(){
	list<string>mylist;
	list<string>:: iterator it;
	mylist.push_back("Amith");
	mylist.push_back("Rampur");
	mylist.push_front("Akshath");

	cout << "List contains " << mylist.size() << " elements..." << endl;
	displaylistelements(mylist);

	//inserting element in the middle
	it = mylist.begin();
	mylist.insert(it, "Dad");
	cout << "List after inserting new element " << endl;
	displaylistelements(mylist);

	cout << "sorting using predicate function " << endl;
	mylist.sort(sortinglist);
	displaylistelements(mylist);

	//reversing contents of list
	mylist.reverse();
	cout << "Reversed list " << endl;
	displaylistelements(mylist);
	return 0;
}