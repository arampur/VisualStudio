#include<iostream>
#include<string>
#include<map>
using namespace std;

template<class T>
void displaymapelements(const T& Input){
	for (auto Element = Input.begin(); Element != Input.end(); ++Element){
		cout << "Map elements " << Element->first << " Key Pairs " << Element->second << endl;
	}
}

int main(){
	map<int, string> mymap;
	mymap.insert(make_pair(1, "Amith"));
	mymap.insert(make_pair(2, "Akshath"));
	mymap.insert(make_pair(3, "Supreeth"));
	mymap.insert(make_pair(4, "Prashanth"));

	cout << "Map contains " << mymap.size() << " Key value pairs.." << endl;
	displaymapelements(mymap);

	//To find a Key value
	cout << "Enter the key to be searched.." << endl;
	int key = 0;
	cin >> key;
	auto Inputkey = mymap.find(key);
	if (Inputkey != mymap.end()){
		cout << "Key " << Inputkey->first << " points to value: " << Inputkey->second << endl;
	}
	else
		cout << "value pair for the supplied key " << key << " not in map.." << endl;
}