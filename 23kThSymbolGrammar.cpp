///K th Symbol in Grammar
/*
i/p :n=3,k=2, 0 1 1 0
o/p : 1

for 0     1
   / \   / \
  0   1 1  0

n=1 =>0
n=2 =>0 1
n=3 =>0 1 1 0
n=4 =>0 1 1 0 1 0 0 1


observe the problem

we'll get that there is same group are repeating after some interval
so we find mid and try to catch k value
if k < mid return it
else return it by complement of same group
*/

#include<bits/stdc++.h>
using namespace std;

int kThSymbol(int n,int k){

  if(n==1 && k==1)
	return 0;
int mid=pow(2,n-1)/2;
  if(k<=mid){
	return kThSymbol(n-1,k);
  }
  else{
	return !kThSymbol(n-1,k-mid);
  }

}

int main()
{
  int n,k;
    cin>>n>>k;
	cout<<kThSymbol(n,k);
    return 0;
}

