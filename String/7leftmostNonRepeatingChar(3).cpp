// Left most NonRepeating Character
//Approach 3
//O(n) O(1) - 1 traversal

#include<bits/stdc++.h>
using namespace std;

const int CHAR =256;
int leftmostNonRepeatingChar(string &str){
	int fI[CHAR];
	fill(fI,fI+CHAR,-1);
for(int i=0;i<str.length();i++){
	if(fI[str[i]]==-1){
		fI[str[i]]=i;
	}
	else{
		fI[str[i]]=-2;
	}
}
	int res=INT_MAX;
	for(int i=0;i<CHAR;i++){
		if(fI[i]>=0){
			res =min(res,fI[i]);
		}
		return(res==INT_MAX)? -1:res;
  }
}

int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostNonRepeatingChar(s);
return 0;
}
