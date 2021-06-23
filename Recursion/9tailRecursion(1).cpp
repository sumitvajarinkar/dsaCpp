//Tail recursion

/*
for printing n to 1 there is tail recursion
for printing 1 to n there is no tail recursion

Tail call elimination :
Takes less time
in modern compilers

It is not always possible to convert non tail to tail
*/

//Tail recursion of 1 to n

#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n,int k){
if(n==0)
	return;
cout<<k<<" ";
print1ToN(n-1,k+1);

}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
print1ToN(n,1);


}
