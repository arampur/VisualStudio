#include<bitset>
#include<iostream>
using namespace std;
int main(){
	bitset <8> mybits;
	cout << "Enter 8 bit sequence.." << endl;
	cin >> mybits;
	cout << "Number of 1's you entered.." << mybits.count() << endl;
	cout << "Number of 0's entered..." << mybits.size() - mybits.count() << endl;

	bitset<8>anotherbits(2);
	cout << "The second bitset contains : " << endl;
	cout << anotherbits << endl;
	bitset<8>Addresult(mybits.to_ullong()+ anotherbits.to_ullong());
	cout << "The result to addition.." << Addresult << endl;

}