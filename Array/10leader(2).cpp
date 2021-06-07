//Leader in an Array
//Approach 2
// O(n) O(1)

//here we traverse from last element which is leader itself because last element is always leader
// but will print o/p in reverse

#include<bits/stdc++.h>
using namespace std;
vector<int>leader(int arr[],int n)
{
    vector<int>v;
      int max=0;

    for (int i=n-1;i>=0;i--)
    {
        if (arr[i]>=max)
        {
            max=arr[i];
            v.push_back(arr[i]);
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
       int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	vector<int>varray=leader(arr,n);
	for(auto i=varray.begin();i<varray.end();i++)
        cout<<*i<<" ";
    return 0;
}

