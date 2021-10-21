//Tower of Hanoi
/*
Rules :
1. Only one disc move at a time
2. Follow order smaller always on the top of bigger disc
3. Only top disc must be move

s=source d=destination h=helper

i/p: 1
o/p: Move disc 1 from A to C

i/p: 2
o/p: Move disc 1 from A to B
	 Move disc 2 from A to C
	 Move disc 1 from B to C

i/p: 3
o/p:Move disc 1 from s to d
	Move disc 2 from s to h
	Move disc 1 from d to h
	Move disc 3 from s to d
	Move disc 1 from h to s
	Move disc 2 from h to d
	Move disc 1 from s to d


No. of move : 2^n-1
*/

#include<bits/stdc++.h>
using namespace std;

void solve(char s,char d,char h,int n){
if(n==1){
	cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl;
	return;
}
solve(s,h,d,n-1);
cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl;
solve(h,d,s,n-1);

}

int main(){

int n;
cout<<"Enter no. of discs\n";
cin>>n;
solve('s','d','h',n);

}





