#include<iostream>
#include<vector>
#include<list>

using namespace std;
template<class T>
//display function to display contents of the list
void displaylistcontents(const T& InputList){
	for (auto IElement = InputList.begin(); IElement != InputList.end(); ++IElement)
		cout << *IElement << " ";
	cout << endl;
}

//sorting in descending order...
bool sortinglist(const int leftlist, const int rightlist){
	return(leftlist > rightlist);
}

int main(){
	list<int> mylist;
	list<int> ::iterator it;
	mylist.push_back(10);
	mylist.push_back(9);
	mylist.push_back(8);
	mylist.push_back(7);
	mylist.push_back(6);
	mylist.push_back(5);
	mylist.push_back(4);
	mylist.push_front(3);
	mylist.push_front(2);

	cout << "List 1 contains " << mylist.size() << " elements..." << endl;
	displaylistcontents(mylist);
	cout << "\n";
	
	//copy elements to another list
	list<int>mylist2(mylist);
	cout << "List 2 now contains " << mylist2.size() << " elements.." << endl;
	displaylistcontents(mylist2);
	cout << "\n";

	//insert elements at the middle of the list..
	it = mylist2.begin();
	++it;
	mylist2.insert(it,20);

	cout << "List after inserting 20.." << endl;
	displaylistcontents(mylist2);
	cout << "\n";
	
	auto myvalue2 = mylist2.insert(mylist2.begin(), 100);
	cout << "After inserting 100 into the list, list now contains: " << endl;
	displaylistcontents(mylist2);
	cout << "\n";
	
	//deleting 100 from the list...
	//mylist2.erase(mylist2.begin(), myvalue2);
	mylist2.erase(myvalue2);
	cout << "After deleting 100 from the list, list now contains: " << endl;
	displaylistcontents(mylist2);
	cout << endl;
	cout << "Final list1 and list 2 contents...." << endl;
	displaylistcontents(mylist);
	cout << endl;
	displaylistcontents(mylist2);
	cout << endl;

	//Sorting list elements...
	mylist2.sort();
	cout << "Sorting list2 elements in ascending order.." << endl;
	displaylistcontents(mylist2);
	cout << endl;

	//sorting in descending order order..
	mylist2.sort(sortinglist);
	cout << "Sorted with a predicate: " << endl;
	displaylistcontents(mylist2);

	//reversing list elements...
	mylist2.reverse();
	cout << "After reversing elements of list2.." << endl;
	displaylistcontents(mylist2);
	return 0;
}