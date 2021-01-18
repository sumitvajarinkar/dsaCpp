//Left rotate an Array by D
//O(n) O(d)
//approach 2

//1st we copy D elements in arr[D]
//2nd we move arr[i] one by one back
//3rd inser arr[D] in arr[i]

#include<bits/stdc++.h>
using namespace std;

int leftrotatebyd(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++) //O(D)
        temp[i]=arr[i];
        
    for(int i=d;i<n;i++) //O(n-D)
        arr[i-d]=arr[i];
        
    for(int i=0;i<d;i++) //O(D)
        arr[n-d+i]=temp[i];
        
        // d + n - d + d = n + d = n (d is negligible)
}
int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    leftrotatebyd(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}


