#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//template<typename T>
//void displayelements(const T& Input){
//	for (auto Element = Input.begin(); Element != Input.end(); ++Element)
//		cout << *Element << ' ';
//	cout << endl;
//}
int main(){
	vector<int> newvector;
	cout << "Sample contents of the vector: " << endl;
	for (int ncount = 11; ncount < 30; ++ncount)
	{
		newvector.push_back(ncount);
		cout << ncount <<' ';
	}
	cout << endl;
	cout << "Enter divisor (>0): ";
	int divisor = 2;
	cin >> divisor;


	auto Ielement = find_if(newvector.begin(), newvector.end(),
		[divisor](int dividend) { return (dividend % divisor) == 0; });

	if (Ielement != newvector.end())
		cout << "First element in vector divisible by " << divisor;
	cout << " : " << *Ielement << endl;

	return 0;
}
