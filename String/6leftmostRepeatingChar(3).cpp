//Left most repeating character
//Approach 3
//O(n) O(1) 1 traversal

/*
i/p: "abbcc"
o/p: 1 (index of b)

i/p: "abcd"
o/p: -1 (distinct)

*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftmostRepeatingChar(string &str){

int fIndex[CHAR];
fill(fIndex,fIndex+CHAR,-1);
int res=INT_MAX;
for(int i=0;i<str.length();i++){
	int fi=fIndex[str[i]];
	if(fi == -1)
		fIndex[str[i]]=i;
	else
		res=min(res,fi);
	}
	return(res == INT_MAX) ? -1:res;
}
int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostRepeatingChar(s);
return 0;
}
