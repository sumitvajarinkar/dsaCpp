//Check for anagram
//Approach 1
//O(n log n)

/*
i/p: s1="listen" s2="silent"
o/p: Yes

i/p: s1:"aab" s2:"bab"
o/p: No
*/

#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string &s1, string &s2){
if(s1.length()!=s2.length())
	return 0;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
return(s1==s2);
}

int main(){
string s1,s2;
cin>>s1>>s2;
if(areAnagram(s1,s2))
	cout<<"Yes";
else
	cout<<"No";
return 0;
}
