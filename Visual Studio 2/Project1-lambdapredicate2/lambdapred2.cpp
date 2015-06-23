#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <typename T>
void displayitems(const T& Input){
	for (auto iElement = Input.begin(); iElement != Input.end(); ++iElement)
		cout << *iElement << endl;
}
int main(){
	vector<string>myvector;
	myvector.push_back("amith");
	myvector.push_back("Akshath");
	myvector.push_back("appaji");
	myvector.push_back("Mummy");
	myvector.push_back("Ajjiajja");
	cout << "Vector elements in order of insertion : " << endl;
	displayitems(myvector);

	cout << "Using default standard sort method..." << endl;
	sort(myvector.begin(), myvector.end());
	displayitems(myvector);

	cout << "Using predicate sort method..." << endl;
	sort(myvector.begin(), myvector.end(),
	[](int Num1, int Num2) {return (Num1 < Num2);
	});
	displayitems(myvector);
	return 0;
}