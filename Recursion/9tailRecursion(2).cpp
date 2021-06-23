//Tail recursion

/*
factorial is not tail recursive but we can convert it in tail recursive.
It is not always possible to convert non tail to tail

merge sort : not tail recursive - slower
quick sort : tail recursive	- faster

In trees,
INORDER - LNR - tail recursive
PREORDER - NLR - tail recursive

POSTORDER - LRN - not tail recursive

for most of the problems use INORDER or PREORDER

*/

#include<bits/stdc++.h>
using namespace std;

// not tail recursive
/*
int fact(int n){
if(n==0 || n==1)
	return 1;
return n*fact(n-1);

}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<fact(n);
*/

// tail recursive

int fact(int n,int k){
if(n==0 || n==1)
	return 1;
return n*fact(n-1,k*n);

}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<fact(n,1);

}

