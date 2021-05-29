//Delete element in array
//O(n) run loop for half searching element and half moving element

/* i/p : 5
         1 2 3 4 5
         3
    o/p: 1 2 4 5
    We just need to assign value to previous element
*/

#include<bits/stdc++.h>
using namespace std;
int deleted(int a[],int n,int pos)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(a[i]==pos)
	//if we find element which user want to delete then we break
        break;
        }
    for(int j=i;j<n-1;j++)
        a[j]=a[j+1];        // move element back
    return n-1;
}
int main()
{
    int n,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>pos;
    deleted(a,n,pos);
    for(int i=0;i<n-1;i++)
         cout<<a[i]<<" ";
    return 0;
}

