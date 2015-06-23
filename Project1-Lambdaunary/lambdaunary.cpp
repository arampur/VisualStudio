#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
template<typename T>
void displayelements(const T& Input){
	for (auto Element = Input.begin(); Element != Input.end(); ++Element)
		cout << *Element << " ";
	cout << endl;
}


int main(){
	vector<int> vecNums;
	/*int ncount, number;
	cout << "Enter total number of elements that needs to be inserted into the vector..." << endl;*/
	/*cin >> number;
	for (ncount = 0; ncount < number; ++ncount)
		vecNums.push_back(ncount);*/
	
	vecNums.push_back(11);
	vecNums.push_back(17);
	vecNums.push_back(42);
	vecNums.push_back(46);
	vecNums.push_back(99);

	cout << "Vector elements are.. " << endl;
	displayelements(vecNums);

	auto Evennum = find_if(vecNums.cbegin(), vecNums.cend(),
		[](const int& Numb) {return((Numb % 2) == 0); });
	
	//auto Evennum = find_if(vecNums.begin(), vecNums.end(), isEven);

	if (Evennum != vecNums.cend()){
		cout << "Even numbers in the collection are..." << *Evennum << '  ';
		
		
	}
}