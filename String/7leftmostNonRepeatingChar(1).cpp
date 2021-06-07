// Left most NonRepeating Character
//Approach 1
//O(n^2) O(1)

#include<bits/stdc++.h>
using namespace std;

int leftmostNonRepeatingChar(string &str){
for(int i=0;i<str.length();i++){
	bool flag=false;
	for(int j=0;j<str.length();j++){
		if(i!=j && str[i] == str[j]){
			flag=true;
			break;
		}
	}
	if(flag==false)
		return i;
}
return -1;

}

int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostNonRepeatingChar(s);
return 0;
}
