//Check is given string is palindrome or not
//Approach 2
//O(n) O(1)

/*
i/p: str : abcdcba
o/p: True

i/p: str: aabcaa
o/p: False
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){
	int begin=0;
	int end=str.length();
	while(begin<end){
		if(str[begin]!=str[end])
			return false;
		begin++;
		end--;
	}
	return true;
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

