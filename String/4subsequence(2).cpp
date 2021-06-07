//Check if a string is subsequence of other
//Approach 1 - iterative
// O(n+m) O(1)

/*
i/p: s1 :ABCD s2: AD
o/p: true

i/p: s1:ABCDE s2:AED
o/p: false
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	int m=s2.length();
	int j=0;
	for(int i=0;i<n && j<m;i++){ //loop run till both string end
		if(s1[i] == s2[j]){
			j++;//increase only s2 count if we get same element previous
		}
	}
	if(j==m)   //if count equal then yes else no
		cout<<"Yes";
	else
		cout<<"No";
}
