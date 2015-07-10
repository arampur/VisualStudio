#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

struct Human{
	char name[40];
	int age;
	char DOB[30];
	Human(){};
	Human(const char * inName, int inAge, const char* inDob) : age(inAge){
		strcpy_s(name,40,inName);
		strcpy_s(DOB, 30,inDob);
	}
};

int main(){
	Human newhuman("Amith Rampur", 25, "may 1234");
	ofstream ofs("filename.bin", ios_base::out | ios_base::binary);
	if (ofs.is_open()){
		cout << "File open successful.." << endl;
		ofs.write(reinterpret_cast<const char*> (&newhuman), sizeof(newhuman));
		ofs.close();
	}

	ifstream ifsfile("filename.bin", ios_base::in | ios_base::binary);
	if (ifsfile.is_open()){
		Human readhuman;
		ifsfile.open((char*)(&readhuman), sizeof(readhuman));
		cout << "File open successful for reading.." << endl;
		cout << "Reading from the binary file: " << endl;
		cout << "Name : " << readhuman.name << endl;
		cout << "Age : " << readhuman.age << endl;
		cout << "Date of Birth : " << readhuman.DOB << endl;
	}
	return 0;
}
