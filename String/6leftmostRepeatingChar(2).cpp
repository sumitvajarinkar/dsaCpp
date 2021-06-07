//Left most repeating character
//Approach 2
//O(n) O(1) 2 traversal

/*
i/p: "abbcc"
o/p: 1 (index of b)

i/p: "abcd"
o/p: -1 (distinct)

*/

#include<bits/stdc++.h>
using namespace std;


const int CHAR =256;
int leftmostRepeatingChar(string &str){

	int count[CHAR]={0};
for(int i=0;i<str.length();i++){
		count[str[i]]++;
	}
for(int i=0;i<str.length();i++){
		if(count[str[i]]>1)
			return i;
}
return -1;
}
int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostRepeatingChar(s);
return 0;
}
