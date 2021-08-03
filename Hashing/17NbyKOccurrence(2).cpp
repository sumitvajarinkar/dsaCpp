//More than n/k occurrence
//Approach 1
//O(n) O(n)

//i/p: n=8, 30 10 20 20 10 20 30 30, k=4
//o/p: 20 30 (occurrence of 20-3 30-3 ) - greater than n/k

#include<bits/stdc++.h>
using namespace std;
void moreThanNbyK(int arr[],int n,int k){
unordered_map<int,int>m;
for(int i=0;i<n;i++)
	m[arr[i]]++;
for(auto x:m)
	if(x.second > n/k)
	cout<<"N/K occurrence\n"<<x.first<<" ";
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

