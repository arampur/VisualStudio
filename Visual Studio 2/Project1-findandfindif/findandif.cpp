#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

//template <typename T>
//void displayitems(const T& Input){
//	for (auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
//		cout << *iElement << endl;
//}

int main(){
	vector<int> myvector;

	for (int ncount = 1; ncount < 10; ++ncount)
		myvector.push_back(ncount);
	cout << "Vector elements...";
	for_each(myvector.begin(), myvector.end(), [](int & element) {cout << element << "  "; });
	cout << endl;
	//find
	int numtofind;
	cout << "Enter the number to find: ";
	cin >> numtofind;
	auto Findelement = find(myvector.begin(), myvector.end(), numtofind);

	if (Findelement != myvector.end())
		cout << "Number " << numtofind << " found in the collection.." << endl;
	else
		cout << "Not found.." << endl;

	//find_if
	auto findifelement = find_if(myvector.begin(), myvector.end(),
		[=](int& element) { return (element % 2) == 0; });

	if (findifelement != myvector.end())
		cout << "First even number found in the collection.." << *findifelement<< endl;
	else
		cout << "No even number in the collection.." << endl;

	size_t numones = count(myvector.begin(), myvector.end(), 1);
	cout << "Number of istances of 1 in the collecton : " << numones << endl;

	//count number of even
	size_t numofeven = count_if(myvector.begin(), myvector.end(), [](int& numb) {return (numb % 2) == 0; });
	cout << "total number of even elements in the collection..." << numofeven << endl;
	cout << "\n";
	cout << "total Number of odd elements : ";
	cout << myvector.size() - numofeven << endl;

	/*fill(myvector.begin(), myvector.end(), 9);
	for_each(myvector.begin(), myvector.end(), [](int & element) {cout << element << "  "; });
	cout << endl;*/
	cout << "\n";
	cout << "Just filling with values..." << endl;
	fill_n(myvector.begin() + 5, 4, 10);
	for (size_t index = 0; index < myvector.size(); ++index)
		cout << myvector[index] << "  ";
	cout << endl;

	
}