#include<iostream>

using namespace std;

template<class X> void swapfunc(X& a, X& b) {
	X temp;
	temp = a;
	a = b;
	b = temp;

	cout << "called template function.." << endl;
}

//overloading generic function

void swapfunc(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "called overloaded generic function.." << endl;
}

int main() {
	int i = 10, j = 20;
	double x = 20.0, jk = 10.5;
	char a = 'M', b = 'N';

	cout << "original vaues of (i,j) " << i << " " << j << endl;
	cout << "original vaues of (x,jk) " << x << " " << jk << endl;
	cout << "original vaues of (a,b) " << a << " " << b << endl;

	//calling respective functions
	swapfunc(i, j);
	swapfunc(a, b);
	swapfunc(x, jk);

	cout << "swap vaues of (i,j) " << i << ' ' << j << endl;
	cout << "swap vaues of (x,jk) " << x << ' ' << jk << endl;
	cout << "swap vaues of (a,b) " << a << ' ' << b << endl;
}