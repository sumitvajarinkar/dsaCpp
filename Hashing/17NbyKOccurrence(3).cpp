//More than n/k occurrence - n is large k is small
//Approach 1
//O(n) O(n)

//i/p: n=9, 30 10 20 20 20 10 40 30 30, k=4
//o/p: 20 30 (occurrence of 20-3 30-3 ) - greater than n/k

#include<bits/stdc++.h>
using namespace std;
void moreThanNbyK(int arr[],int n,int k)
{
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        if(m.find(arr[i])!=m.end())
            m[arr[i]]++;
        else if(m.size()<k-1)
            m[arr[i]]=1;
        else
            for(auto x:m){
                x.second--;
                if(x.second==0)
                    m.erase(x.first);}
    }
    for(auto x:m){
        int count=0;
        for(int i=0;i<n;i++){
            if(x.first==arr[i])
                count++;

       }
        if(count>n/k)
            cout<<x.first<<" ";
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
    cout<<"Enter k value for n/k occurrence\n";
    cin>>k;
    moreThanNbyK(arr,n,k);
    return 0;

}

