//Count the Distinct Elements
//Approach 1
//O(n^2) O(1)

//i/p: n=5, 10 11 10 12 11
//o/p: 3 (10,11,12)

#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<i; j++)
        {
        	//if same element found break loop
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        //distinct element ++
        if(flag==false)
            res++;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int x:arr)
        cin>>x;
    cout<<countDistinct(arr,n);
    return 0;
}
