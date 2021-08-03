//More than n/k occurrence
//Approach 1
//O(n log n) O(1)

//i/p: n=8, 30 10 20 20 10 20 30 30, k=4
//o/p: 20 30 (occurrence of 20-3 30-3 ) - greater than n/k

#include<bits/stdc++.h>
using namespace std;
void moreThanNbyK(int arr[],int n,int k){
sort(arr,arr+n);
int i=1,count=1;
while(i<n){
	while(i<n && arr[i]==arr[i-1])
	{
		count++;
		i++;
	}
	if(count>n/k)
		cout<<arr[i-1]<<" ";
	count=1;
	i++;
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
    cout<<"Enter k value for n/k occurence\n";
    cin>>k;
    moreThanNbyK(arr,n,k);
    return 0;

}
