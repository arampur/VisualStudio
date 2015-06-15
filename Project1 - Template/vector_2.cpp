#include<iostream>
#include<vector>
//#include<cctype>
using namespace std;

int main() {
	vector<char> v(10);
	unsigned int i;

	cout << "Size of array = " << v.size() << endl;

	//assign the elements of the vector array
	for (i = 0; i < 10; i++) v[i] = i + 'a';

	cout << "current contents of the array: " << endl;
	for (i = 0; i < 10; i++) cout << v[i] << " ";
	cout << "\n \n";

	//add some more elements into the array
	cout << "expanding vector size " << endl;
	for (i = 0; i < 10; i++) v.push_back(i + 10 + 'a');

	cout << "New size " << v.size() << endl;
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << "\n \n";

	//modifying the contents
	for (i = 0; i < v.size(); i++) v[i] = toupper(v[i]);
	cout << "modified contents..." << endl;
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	return 0;
}
