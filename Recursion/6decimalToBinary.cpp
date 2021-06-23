// Decimal to binary conversion
/*
i/p: 7
o/p: 111
*/
#include<bits/stdc++.h>
using namespace std;

void decimaltoBinary(int n){
if(n==0)
	return;
decimaltoBinary(n/2); //divisor
cout<<n%2;			  //reverse of reminder
}
int main(){
int n;
cout<<"Enter a decimal number\n";
cin>>n;
decimaltoBinary(n);
}
