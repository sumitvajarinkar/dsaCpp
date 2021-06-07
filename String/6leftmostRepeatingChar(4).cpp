//Left most repeating character
//Approach 4
//O(n) O(1) 1 traversal (most optimal)

/*
i/p: "abbcc"
o/p: 1 (index of b)

i/p: "abcd"
o/p: -1 (distinct)

Idea :
traverse from right to left, use visited.
*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftmostRepeatingChar(string &str){

bool visited[CHAR];
fill(visited,visited+CHAR,0);
int res=-1;
for(int i=str.length();i>0;i--){
	if(visited[str[i]])
		res=i;
	else
		visited[str[i]]=1;
}
return res;
}

int main(){
string s;
cin>>s;
cout<<"Index is "<<leftmostRepeatingChar(s);
return 0;
}
