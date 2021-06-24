//Fibonacci number -
//Fibonacci series - 0 1 1 2 3 5 8 13 21 44
/*
i/p: 3
o/p: 2 (index of 2)

*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	//for 1st two elements base condition
if(n<=1)
	return n;
	//addition of previous 2 numbers
return (fib(n-1) + fib(n-2));

}

int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
cout<<fib(n);
return 0;
}
