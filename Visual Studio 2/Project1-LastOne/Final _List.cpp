#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){
	priority_queue<int> mypqueue;
	for (size_t ncount = 1; ncount <= 10; ++ncount)
		mypqueue.push(ncount);
	cout << "Priority queue contains : " << mypqueue.size() << " elements.." << endl;
	if (mypqueue.empty())
		cout << "Contents are empty" << endl;
	else
		cout << "You inserted some items.." << endl;

	cout << "largest element in the priority queue : " << mypqueue.top() << endl;

	cout << "Deleting elements " << endl;
	while (!mypqueue.empty()){
		cout << "Deleting the topmost element : " << mypqueue.top() << endl;
		mypqueue.pop();
	}
	cout << "\n";
	cout << "Demonstrating vector boolean : " << endl;

	vector<bool>  myvecbool(3);
	myvecbool.push_back(true);
	myvecbool.push_back(false);
	myvecbool.push_back(true);
	myvecbool.push_back(false);
	cout << "contents of vector : " << endl;
	for (size_t nIndex = 0; nIndex < myvecbool.size(); ++nIndex)
		cout << myvecbool[nIndex] << "  ";
	cout << endl;
	myvecbool.flip();
	cout << "after flipping contents : " << endl;
	for (size_t nIndex = 0; nIndex < myvecbool.size(); ++nIndex)
		cout << myvecbool[nIndex] << "  ";
	cout << "\n";
	
	return 0;
}