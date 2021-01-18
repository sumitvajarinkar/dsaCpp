//Left rotate an Array by D
//O(n) O(1)
//approach 3

// 1st we reverse D
//then reverse D to N
// and finnaly we reverse whole the array
// so we get as desire output


#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]); //reverse till low and high overlap
        low++;
        high--;
    }
}

void leftrotatebyd(int arr[],int n,int d)
{                                                    // 1 2 3 4 5 

        reverse(arr,0,d-1); //call for 1st D number     2 1 3 4 5
        
        reverse(arr,d,n-1); //call for D to N number    2 1 5 4 3
        
        reverse(arr,0,n-1); //call for 0th to N number  3 4 5 1 2 
        
}


int main()
{
    int n,d;
    cin>>d;
   
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
 	cin>>n;
    leftrotatebyd(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
