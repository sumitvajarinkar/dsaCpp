//Find if pair of given sum
//Approach 1
//O(n^2) O(1)

//i/p: n=5, 3 2 8 15 -5 sum=17
//o/p: true (2+15)

#include<bits/stdc++.h>
using namespace std;
bool givenSum(int arr[],int n,int sum)
{
    for(int i=0; i<n; i++)
        {
        	for(int j=i+1; j<n; j++)
            {
            	if(arr[i]+arr[j]==sum)
                {
                	return true;
                }
            }
        }
    return false;
}
int main()
{
    int n,sum;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter sum\n";
    cin>>sum;
    cout<<givenSum(arr,n,sum);
    return 0;
}
