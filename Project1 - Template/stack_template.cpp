#include<iostream>

using namespace std;
const int SIZE = 10;
template<class StackType> class stack {
	int tos;
	StackType stck[SIZE];
public:
	stack() {
		tos = 0;
	}

	void push(StackType ob);
	StackType pop();
};

template<class StackType> void stack <StackType> ::push(StackType ob) {
	if (tos == SIZE) {
		cout << "Stack overflow.." << endl;
		return;
	}
	else
	{
		stck[tos] = ob;
		tos++;
	}
}

template<class StackType>
StackType stack <StackType> ::pop() {
	if (tos == 0) {
		cout << "stack underflow.." << endl;
		return 0;
	}
	else
	{
		tos--;
		return stck[tos];
	}
}

int main() {
	stack <int> s1, s2;
	//stack <double> double1, double2;
	int i;
	s1.push(10);
	s1.push(1);
	s1.push(12);
	s1.push(32);
	for (i = 0; i < 4; i++) {
		cout << "Popped stack s1: " << s1.pop() << "\n";
	}
	s2.push(21);
	s2.push(13);
	s2.push(43);
	s2.push(40);
	for (i = 0; i < 4; i++) {
		cout << "Popped stack s2: " << s2.pop() << "\n";
	}
	return 0;
}
