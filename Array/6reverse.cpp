//Reverse an Array
// O(n) but here, half time loop run so Thita(n)


#include<bits/stdc++.h>
using namespace std;
int reversed(int arr[],int n)
{
  int low=0,high=n-1;
    while(low<high)
    {
        int temp=a[low];
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
    reversed(a,n);
    return 0;

}
