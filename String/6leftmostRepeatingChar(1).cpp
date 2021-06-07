//Left most repeating character
//Approach 1
//O(n^2) O(1)

/*
i/p: "abbcc"
o/p: 1 (index of b)

i/p: "abcd"
o/p: -1 (distinct)

*/

#include<bits/stdc++.h>
using namespace std;

int leftmostRepeatingChar(string &str){
for(int i=0;i<str.length();i++){
	for(int j=i+1;j<str.length();j++){
		if(str[i] == str[j])
			return i;
	}
}
return -1;
}
int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostRepeatingChar(s);
return 0;
}
