#include<map>
#include<string>
#include<iostream>
using namespace std;

template <class T>
void displaymapelements(const T& Input){
	for (auto Element = Input.begin(); Element != Input.end(); ++Element)
		cout << Element->first << " " << Element->second << endl;
	cout << endl;
}
int main(){
	map<int, string> mymap;
	mymap.insert(make_pair(1, "amith"));
	mymap.insert(make_pair(2, "akshath"));
	mymap.insert(make_pair(3, "supreeth"));
	mymap.insert(make_pair(4, "karthik"));
	cout << "The map contains " << mymap.size() << " key - value pairs : " << endl;
	displaymapelements(mymap);

	int key = 0;
	cout << "Enter the key to be searched.." << endl;
	cin >> key;

	auto findkey = mymap.find(key);
	if (findkey != mymap.end()){
		cout <<"Key "<< findkey->first << " points to value : " << findkey->second << endl;
	}
	else
		cout << "value pair for the supplied key " << key << " not in map.." << endl;
	return 0;
}