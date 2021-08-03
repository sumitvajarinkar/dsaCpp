//Count distinct elements in every window (k)
//Approach 1
//O((n-k)k^2)  O(1)

//i/p: n=7, 10 20 20 10 30 40 10, k=4
//o/p: 2 3 4 3

#include<bits/stdc++.h>
using namespace std;
void countDistinct(int arr[],int n,int k)
{
    for(int i=0; i<=n-k; i++)
    {
        int count=0;
        for(int j=0; j<k; j++)
        {
            bool flag=false;
            for(int p=0; p<j; p++)
            {
                if(arr[i+j]==arr[i+p])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)count++;

        }
        cout<<count<<" ";
    }
}
int main()
{
    int n,k;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter window k value\n";
    cin>>k;
    countDistinct(arr,n,k);
    return 0;

}
