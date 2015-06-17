#include<vector>
#include<map>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

template<class X>
void displaymapelements(const X& Input){
	for (auto Ielement = Input.begin(); Ielement != Input.end(); ++Ielement)
		cout << Ielement->first << " " << Ielement->second << endl;
	cout << endl;
}
int main(){
	map<int, string> mymap;
	mymap.insert(make_pair(1, "amith"));
	mymap.insert(make_pair(2, "akshath"));
	mymap.insert(make_pair(3, "supreeth"));
	mymap.insert(make_pair(4, "ajay"));
	
	
	cout << "Map contains " << mymap.size() << " key value pairs.." << endl;
	displaymapelements(mymap);

	cout << "Enter the key to be searched.." << endl;
	int key = 0;
	cin >> key;

	auto findkey = mymap.find(key);
	if (findkey != mymap.end()){
		cout << "Key " << findkey->first << " points to value : " << findkey->second << endl;
	}
	else
		cout << "value pair for the supplied key " << key << " not in map.." << endl;
}