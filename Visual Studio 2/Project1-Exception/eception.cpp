#include<iostream>
using namespace std;

double Division(double dividend, double divisor){
	if (divisor == 0)
		throw "Division by zero not allowed..";
	return (divisor / dividend);
}

int main(){
		cout << "Enter the value of divisor.." << endl;
		double divisor;
		cin >> divisor;
		cout << "Enter the value of dividend.." << endl;
		double dividend;
		cin >> dividend;
		try{
			cout << "Result of division : " << Division(dividend, divisor);
			cout << endl;
		}
		catch (char * exception){
			cout << "Exception: " << exception << endl;
			cout << "Program execution ended.." << endl;
		}
		return 0;
}