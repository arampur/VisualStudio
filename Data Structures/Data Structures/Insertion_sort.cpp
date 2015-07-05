#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
template <typename Iterator>
 void insertionSort(const Iterator & begin, const Iterator & end)
{
 insertionSort(begin, end, less<decltype(*begin)>{ });
 }
 
 template<typename T>
 void display(const T& Input){
	 for (auto Ielement = Input.begin(); Ielement != Input.end(); ++Ielement)
		 cout << *Ielement << endl;
 }

 template <typename Iterator, typename Comparator>
  void insertionSort(const Iterator & begin, const Iterator & end,
	  Comparator lessThan)
	 {
	  if (begin == end)
		  return;
	 
		  Iterator j;
	 
		  for (Iterator p = begin + 1; p != end; ++p)
		  {
		 auto tmp = std::move(*p);
		  for (j = p; j != begin && lessThan(tmp, *(j - 1)); --j)
			 * j = std::move(*(j - 1));
		  * j = std::move(tmp);
		 }
}

 int main(){
	 vector<int> myvector;
	 myvector.push_back(12);
	 myvector.push_back(1);
	 myvector.push_back(21);
	 myvector.push_back(11);
	 myvector.push_back(19);
	 myvector.push_back(10);
	 myvector.push_back(7);
	 display(myvector);
	 cout << "Performing insertion sort.." << endl;
	 insertionSort(myvector.begin(), myvector.end());
	 display(myvector);
	 return 0;
 }