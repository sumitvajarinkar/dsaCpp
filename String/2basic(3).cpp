
/*C++ style strings
strings in C++ overcomes the drawbacks in C-style
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	//can assign a string later but not in C-style
	str = "sumit";
	cout<<str<<endl;

	//.length function to measure length
	cout<<str.length()<<endl;

	//concatenation
	str+="xyz";
	cout<<str<<endl;

	//String print from index 2 to 3
	cout<<str.substr(2,3)<<endl;

	//find given substr is present(print index) or not(print garbage value)
	cout<<str.find('mit');
	return 0;
}
