//Sum of natural numbers
//Theta(n) Theta(n)
/*
Although iterative solution is better option takes O(1) space
*/


#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
if(n==0)
	return 0;
return (n+sumOfN(n-1));

}

int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<"Sum of natural no. "<<n<<" is "<<sumOfN(n);

}
