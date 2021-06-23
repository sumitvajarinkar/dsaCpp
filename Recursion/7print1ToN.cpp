// Print 1 to N using recursion
/*
No Tail call elimination Theta(n) axillary space
i/P: 5
o/P: 1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n){
if(n==0)
	return;;
print1ToN(n-1);
cout<<n<<" ";

}
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
print1ToN(n);


}
