#include<string>
#include<algorithm>
using namespace std;

class stringchangecase{
public:
	bool operator() (const string& str1, const string& str2) const {
		string strlowercase;
		strlowercase.resize(str1.size());

		transform(str1.begin(), str1.end(), strlowercase.begin(), tolower);

		string strlowercase2;
		strlowercase2.resize(str2.size());
		transform(str2.begin(), str2.end(), strlowercase.begin(), tolower);

		return(strlowercase < strlowercase2);
	}
};