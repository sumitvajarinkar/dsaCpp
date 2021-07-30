//Count the Frequencies of Elements
//Approach 2
//O(n) O(n)

//i/p: n=5, 10 11 10 12 11
//o/p: 10-2 11-2 12-1
#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)
{
    unordered_map<int,int>h;
    for(int i=0; i<n; i++)
        h[arr[i]]++;
    for(auto x:h)
        cout<<x.first<<" - "<<x.second<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    countDistinct(arr,n);
    return 0;

}
