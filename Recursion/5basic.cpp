// Divide by 2
/*
i/p: 16
o/p: 4

log2N
*/
#include<bits/stdc++.h>
using namespace std;

int divideBy2(int n){
if(n==1)
	return 0;
else
	return 1+divideBy2(n/2);
}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<divideBy2(n);
}
