//Check for anagram
//Approach 2
//O(n) O(1)

/*
i/p: s1="listen" s2="silent"
o/p: Yes

i/p: s1:"aab" s2:"bab"
o/p: No
*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR =256; //constant work
bool areAnagram(string &s1, string &s2){
if(s1.length()!=s2.length())
	return 0;
int count[CHAR]={0}; //array of char
for(int i=0;i<s1.length();i++){
	count[s1[i]]++;
	count[s2[i]]--;
}
for(int i=0;i<CHAR;i++){
	if(count[i]!=0)
		return false;
}
return true;
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
