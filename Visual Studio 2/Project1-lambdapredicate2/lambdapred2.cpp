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
	myvector.push_back("akshath");
	myvector.push_back("appaji");
	myvector.push_back("mummy");
	myvector.push_back("ajjiajja");
	cout << "Vector elements in order of insertion : " << endl;
	displayitems(myvector);

	cout << "Using default standard sort method..." << endl;
	sort(myvector.begin(), myvector.end());
	displayitems(myvector);

	cout << "Using predicate sort method..." << endl;
	sort(myvector.begin(), myvector.end(),
	[](string Num1, string Num2) {return (Num1 > Num2);
	});
	displayitems(myvector);
	return 0;
}