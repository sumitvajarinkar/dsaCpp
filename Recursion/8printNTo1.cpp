
// Print 1 to N using recursion
/*
Tail call elimination O(1) axillary space
i/P: 5
o/P: 5 4 3 2 1
*/


#include<bits/stdc++.h>
using namespace std;

void printNTo1(int n){
if(n==0)
	return;;
cout<<n<<" ";
printNTo1(n-1);

}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
printNTo1(n);


}
