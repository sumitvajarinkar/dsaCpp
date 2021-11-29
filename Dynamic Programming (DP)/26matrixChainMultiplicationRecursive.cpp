/// Matrix Chain Multiplication (MCM) - Recursive

/*
i/p:
n:5
arr[]=40,20,30,10,30

o/p:26000


There are 4 matrices of dimensions 40x20, 20x30, 30x10 and 10x30.
Let the input 4 matrices be A, B, C and D.  The minimum number of
multiplications are obtained by putting parenthesis in following way
(A(BC))D --> 20*30*10 + 40*20*10 + 40*10*30


*/

#include<bits/stdc++.h>
using namespace std;

int mcm(int arr[], int i, int j){
if(i >= j)
	return 0;

int mn=INT_MAX;
for(int k=i; k <= j-1; k++){
	int temp=mcm(arr,i,k)+
			 mcm(arr,k+1,j)+
			 arr[i-1]*arr[k]*arr[j];
	mn=min(mn,temp);
}
return mn;
}

int main(){

int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements in array\n";
for(int i=0;i<n;i++)
	cin>>arr[i];
cout<<"MCM is "<<mcm(arr,1,n-1);
}
