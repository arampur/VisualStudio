#include<iostream>
using namespace std;

template<class X> void bubble(X * items, int count) {
	X temp;
	register int a, b;
	for (a = 1; a < count; a++)
		for (b = count - 1; b >= a; b--)
			if (items[b - 1]>items[b]) {
				temp = items[b - 1];
				items[b - 1] = items[b];
				items[b] = temp;
			}
}

int main() {
	//integer 
	int iarray[7] = { 10, 11, 9, 14, 7, 1, 45 };
	double doublearray[7] = { 12.4, 11.9, 14.6, 7.1, 54.2, 10, 56.3 };
	int i;
	cout << "Integer elements..." << endl;
	for (i = 0; i < 7; i++) {
		cout << iarray[i] << " " << endl;
	}

	cout << "double array elements..." << endl;
	for (i = 0; i < 7; i++) {
		cout << doublearray[i] << " " << endl;
	}

	bubble(iarray, 7);
	cout << "Sorted integer elements.." << endl;
	for (i = 0; i < 7; i++) {
		cout << iarray[i] << " " << endl;
	}

	bubble(doublearray, 7);
	cout << "Sorted double elements..." << endl;
	for (i = 0; i < 7; i++) {
		cout << doublearray[i] << " " << endl;
	}
	return 0;
}