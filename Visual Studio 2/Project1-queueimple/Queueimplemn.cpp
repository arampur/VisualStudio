#include<iostream>
#include<queue>
using namespace std;


int main(){
	queue<int> myqueue;
	for (size_t ncount = 1; ncount <= 10; ++ncount)
		myqueue.push(ncount);
	cout << "Queue contains " << myqueue.size() << " elements.." << endl;

	while (myqueue.size() != 0)
	{
		cout << "Deleting element : " << myqueue.front() << endl;
		myqueue.pop();
	}
	if (myqueue.empty())
		cout << "Queue is now empty.." << endl;
	return 0;
}