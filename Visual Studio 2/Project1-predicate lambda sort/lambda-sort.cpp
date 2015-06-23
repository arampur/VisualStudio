#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <typename T>
void displayitems(const T& Input){
	for (auto iElement = Input.begin();iElement != Input.end();++iElement)
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
		[](const string& str1, const string& str2) -> bool{
		string str1lowercase;
		str1lowercase.resize(str1.size());
		transform(str1.begin(), str1.end(), str1lowercase.begin(), tolower);

		string str2lowercase;
		str2lowercase.resize(str2.size());
		transform(str2.begin(), str2.end(), str2lowercase.begin(), tolower);

		return(str1lowercase < str2lowercase);
	} //end of lambda expression...
	);//end of sort function
	displayitems(myvector);
	return 0;
}