//Longest common span with same sum binary array
//Approach 2
//O(n) O(n)

//i/p:m=6,n=6, a[]=0 1 0 0 0 0, b[]=1 0 1 0 0 1
//o/p: 4 (1st to 4th index)

#include<bits/stdc++.h>
using namespace std;
int longestCommonSum(int a[],int b[],int m,int n){
// Find difference between the two
	int arr[n];
	for (int i=0; i<n; i++)
	arr[i] = a[i] - b[i];

	// Creates an empty hashMap hM
	unordered_map<int, int> hM;

	int sum = 0;	 // Initialize sum of elements
	int max_len = 0; // Initialize result

	// Traverse through the given array
	for (int i = 0; i < n; i++)
	{
		// Add current element to sum
		sum += arr[i];

		// To handle sum=0 at last index
		if (sum == 0)
			max_len = i + 1;

		// If this sum is seen before,
		// then update max_len if required
		if (hM.find(sum) != hM.end())
		max_len = max(max_len, i - hM[sum]);

		else // Else put this sum in hash table
			hM[sum] = i;
	}

	return max_len;
}
int main(){
   int m,n;
    cout<<"Enter the number of elements A\n";
    cin>>m;
    int a[m];
    cout<<"Enter elements\n";
    for(int i=0; i<m; i++)
        cin>>a[i];

	cout<<"Enter the number of elements B\n";
    cin>>n;
    int b[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<"Longest common span with same sum binary array is "<<longestCommonSum(a,b,m,n);
    return 0;
}
