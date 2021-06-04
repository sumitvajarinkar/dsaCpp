#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[]="sumit";
//char string terminated with \0 i.e. sumit\0
	cout<<str<<endl;

//size is 6 including \0
	cout<<sizeof(str)<<endl;

	char str1[]={'s','u','m','i','t'};
//	not print actual no termination
	cout<<str1;

	/* ERROR - cannot assign string later
	char str[5];
	str ='sumit';
	cout<<str;
	*/
	return 0;
}
