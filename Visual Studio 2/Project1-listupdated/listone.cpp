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
	mylist.push_back("Rishika");
	mylist.push_back("appaji");
	mylist.push_back("Ajjiajja");

	cout << "mylist elements..." << endl;
	display(mylist);

	sort(mylist.begin(), mylist.end());
	cout << "contents of list after sorting..." << endl;
	

	display(mylist);

	vector<int> myvector;
	myvector.push_back(20);
	myvector.push_back(1);
	myvector.push_back(12);
	myvector.push_back(21);
	myvector.push_back(9);

	cout << "Finding the occurence of even numbers in the vector array : " << endl;
	auto findeven = find_if(myvector.begin(), myvector.end(),
		[](const int &element) {return ((element % 2) == 0); });
	if (findeven != myvector.end()){
		cout << "Even number in the collection is : " << *findeven << endl;
	}

	cout << "Sorting names in the list ignoring case " << endl;
	sort(mylist.begin(), mylist.end(),
		[](const string& str1, const string& str2) -> bool
	{
		string str1lowecase;
		string str2lowecase;
		str1lowecase.resize(str1.size());
		transform(str1.begin(), str1.end(), str1lowecase.begin(), tolower);

		str2lowecase.resize(str2.size());
		transform(str2.begin(), str2.end(), str2lowecase.begin(), tolower);
		return (str1lowecase < str2lowecase);
	}
	);
	display(mylist);

	vector<int> intvector(5);
	cout << "Generating random values for integer vector : " << endl;
	generate(intvector.begin(), intvector.end(), rand);
	display(intvector);
	cout << "Generating using generate_n function : " << endl;
	generate_n(intvector.begin(), 3, rand);
	display(intvector);
	return 0;
}