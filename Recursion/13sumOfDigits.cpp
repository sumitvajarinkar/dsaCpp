//Sum of digits in given number
//Theta(n) Theta(n)
/*
Although iterative solution is better option takes O(1) space

int res=0,m=0;
while(n>0)
{
	m=n%10; //separate last digit
	res+=m;
	n/=10; //remove last digit
}
return res;

*/

#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n){
if(n<=9)
	return n;
return(sumOfDigit(n/10)+n%10);
}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<"Sum of digits in no. "<<n<<" is "<<sumOfDigit(n);

}
