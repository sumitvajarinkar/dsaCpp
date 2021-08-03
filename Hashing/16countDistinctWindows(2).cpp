//Count distinct elements in every window (k)
//Approach 1
//O(n) O(n)

//i/p: n=7, 10 20 20 10 30 40 10, k=4
//o/p: 2 3 4 3

#include<bits/stdc++.h>
using namespace std;
void countDistinct(int arr[],int n,int k)
{
    map<int, int> m;

    for (int i = 0; i < k; i++)
    {
        m[arr[i]] += 1;
    }

    cout << m.size() << " ";

    for (int i = k; i < n; i++)
    {

        m[arr[i - k]] -= 1;

        if (m[arr[i - k]] == 0)
        {
            m.erase(arr[i-k]);
        }
        m[arr[i]] += 1;

        cout << m.size() << " ";
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
