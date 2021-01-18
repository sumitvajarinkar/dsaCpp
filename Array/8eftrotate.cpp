//Left rotate an Array by One
//O(n) O(1)

#include<bits/stdc++.h>
using namespace std;
int leftrotatebyone(int a[],int n)
{
    int temp=a[0];        //store 0th element in temp
    for(int i=1;i<n;i++)
         {
         	a[i-1]=a[i];   //move other element back bye one
		 } 
       a[n-1]=temp;        //insert temp element at end
      
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    leftrotatebyone(a,n);
     for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    return 0;
}

