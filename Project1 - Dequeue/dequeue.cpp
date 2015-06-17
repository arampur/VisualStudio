#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
template <typename T>
void displayvector(const T& vecInput){
	for (auto Iterator = vecInput.begin(); Iterator != vecInput.end(); ++Iterator)
		cout << *Iterator << " " << endl;
}
int main(){
	vector<int> myvector;
	int choice;
	char choice2;
	do{
		cout << "Enter 1: To enter a vector integer.." << endl;
		cout << "Enter 2: To query for an element in the vector.." << endl;
		cout << "Enter 3: Display vector elements..." << endl;
		cout << "Enter 4: Exit.." << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice){
		case 1: cout << "Please enter the integer to be inserted.." << endl;
			int enterdata;
			cin >> enterdata;
			myvector.push_back(enterdata);
			break;
		case 2: cout << "Checking for en element in vector.." << endl;
			cout << "Element element between index 0 and ";
			cout << (myvector.size()) << ": ";
			int Index;
			cin >> Index;
			if (Index < myvector.size()){
				cout << "Element[" << Index << "] = " << myvector[Index];
				cout << endl;
			}
			break;
		case 3: cout << "Displaying vector elements.." << endl;
			displayvector(myvector);
			break;
		case 4: exit(0);
			break;
		default: cout << "please enter valid choice.." << endl;
			break;
		}
		cout << "Do you want to enter another value(y/n)? " << endl;
		cin >> choice2;
	} while (choice2 == 'y' || choice2 == 'Y');
	return 0;
}