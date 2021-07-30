//Count the Distinct Elements
//Approach 2
//O(n) O(n)

//i/p: n=5, 10 11 10 12 11
//o/p: 3 (10,11,12)
#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n)
{
unordered_set<int>s;
//Set take only distinct value inside.
for(int i=0;i<n;i++)
	s.insert(arr[i]);
return s.size();
	}
int main(){
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
