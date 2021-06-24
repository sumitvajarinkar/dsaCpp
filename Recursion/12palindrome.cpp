//Palindrome string
//Theta(n) Theta(n)
/*
abba is palindrome
abab is not palindrome

i/p: abbcbba o/p: yes
i/p: abcdcba o/p: no
*/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int s,int e){
//	if s and e equal or overlap return 1;
// for even and odd of n it will equal and overlap respectively.
if(s>=e)
	return 1;
//	check 1st and last are equal or not AND increment s and decrement e
return(str[s]==str[e] && isPalindrome(str,s+1,e-1));
}

int main(){

string s;
int n;
cout<<"Enter a string\n";
cin>>s;
n=s.length();
if(isPalindrome(s,0,n-1))
	cout<<"Yes palindrome";
else
	cout<<"Not palindrome";
}
