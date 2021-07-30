//Find if pair of given sum (sub-array-contiguous)
//Approach 2
//O(n) O(n)

//i/p: n=5, 3 2 8 15 -5 sum=17
//o/p: true (2+15)

#include<bits/stdc++.h>
using namespace std;
bool givenSum(int arr[],int n,int sum)
{
unordered_set<int>h;
for(int i=0;i<n;i++){
	//if sum - i th element is present then true
	if(h.find(sum - arr[i]) != h.end())
			return true;
		else
		//insert 1 by 1 and check
		    h.insert(arr[i]);
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
