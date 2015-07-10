#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream myfile("hello.txt", ios_base::out);
	if (myfile.is_open()){
		cout << "file open successful.." << endl;
		myfile << "My first! file vohooo" << endl;
		myfile << "Hello!!!" << endl;

		cout << "finished writing to the file.." << endl;
		myfile.close();
	}
	cout << "Trying to open and work with another file.." << endl;
	ifstream myfile2;
	myfile2.open("newfile.txt", ios_base::in);
	if (myfile2.is_open()){
		cout << "Second file open was successful and it contains: " << endl;
		string mycontents;
		while (myfile2.good()){
			getline(myfile2, mycontents);
			cout << mycontents << endl;

		}
		cout << "Finished reading contents.. closing file now.." << endl;
		myfile2.close();
	}
	else
		cout << "Error opening second file. It doesnt exist. Please check again.." << endl;
	return 0;
}