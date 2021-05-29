//Reverse an Array
// O(n) but here, half time loop run so Theta(n) as we are using low high


#include<bits/stdc++.h>
using namespace std;
int reversed(int arr[],int n)
{
  int low=0,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reversed(arr,n);
    return 0;

}
