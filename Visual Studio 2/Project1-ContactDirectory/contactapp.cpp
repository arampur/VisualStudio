#include<list>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

//template to display elements
template<typename T>
void displayelements(const T& Input){
	for (auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
		cout << *iElement << endl;
}

//structure to define contact directory
struct ContactList{
	string ContactName;
	string ContactPhone;
	string ContactDisplay;

	//Constructor and Destructor
	ContactList(const string& cname, const string& cnumber)
	{
		ContactName = cname;
		ContactPhone = cnumber;
		ContactDisplay = (ContactName + " : " + ContactPhone);
	}
	//removing given contact item
	bool operator == (const ContactList& tocompare)  const {
		return (tocompare.ContactName == this->ContactName);
	}

	//using sort predicate
	bool operator < (const ContactList& tocompare)  const {
		return (this->ContactName < tocompare.ContactName);
	}

	operator const char*() const {
		return ContactDisplay.c_str();
	}
};

bool sortphone(const ContactList& item1, const ContactList& item2){
	return(item1.ContactPhone > item2.ContactPhone);
}

int main(){
	list<ContactList> mylist;
	mylist.push_back(ContactList("ARampur", "+23234343"));
	mylist.push_back(ContactList("AkRampur", "+34556676"));
	mylist.push_back(ContactList("MaRampur", "+34545232"));
	mylist.push_back(ContactList("RiRampur", "+798780890"));
	mylist.push_back(ContactList("PMRampur", "+12235676"));
	mylist.push_back(ContactList("ampur", "+978676745"));
	mylist.push_back(ContactList("Apur", "+0896755454"));
	cout << "Contact Directory: " << endl;
	displayelements(mylist);
	cout << "\n";
	mylist.sort();
	cout << "After sorting normally..." << endl;
	displayelements(mylist);
	cout << "\n";

	mylist.sort(sortphone);
	cout << "After sorting using sort predicate.." << endl;
	displayelements(mylist);
	cout << "\n";
	cout << "After erasing Apur from the list.." << endl;
	
	mylist.remove(ContactList("Apur",""));
	displayelements(mylist);
	cout << "\n";

	return 0;

}

