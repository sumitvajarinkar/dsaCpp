//Check is given string is palindrome or not
//Approach 1
//O(n) O(n)

/*
i/p: str : abcdcba
o/p: True

i/p: str: aabcaa
o/p: False
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){
	string rev = str;
	reverse(rev.begin(),rev.end());
	return(rev == str);
}

int main(){
string s;
cin>>s;
if(isPalindrome(s))
	cout<<"True";
else
cout<<"False";
return 0;

}
