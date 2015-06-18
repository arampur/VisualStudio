#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<vector>

using namespace std;

//template
template <typename T1, typename T2>
void displayelements(unordered_map <T1, T2> & Input){
	cout << "Number of pairs : " << Input.size() << endl; 
	cout << "load capacity : " << Input.load_factor() << endl;
	cout << "Bucket count : " << Input.bucket_count() << endl;
	cout << "Max load factor : " << Input.max_load_factor() << endl;

	for (auto iterator = Input.begin(); iterator != Input.end(); ++iterator)
		cout << iterator->first << " " << iterator->second << endl;
}

int main(){
	unordered_map<int, string>mymap;
	mymap.insert(make_pair(100, "hundred"));
	mymap.insert(make_pair(1000, "thousand"));
	mymap.insert(make_pair(10, "ten"));
	mymap.insert(make_pair(9, "nine"));
	mymap.insert(make_pair(21, "twenty one"));
	displayelements(mymap);

	cout << "Enter the key to search : ";
	int key = 0;
	cin >> key;

	auto ielementfind = mymap.find(key);
	if (ielementfind != mymap.end()){
		cout << "Key " << ielementfind->first << " has value pair " << ielementfind->second << endl;
	}
	else
		cout << "key has no corresponding value in map!.." << endl;

	return 0;
}