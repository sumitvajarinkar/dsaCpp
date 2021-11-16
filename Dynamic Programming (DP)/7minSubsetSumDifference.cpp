///Minimum Subset Sum Difference
/*
i/p: n=4, v=1 6 11 5
o/p: 1 (12-11=1) most minimum

s1-s2=0 - for equal subset
s1-s2=min - minimum difference

range(sum of v)= s1+s2
s2=range(sum of v)-s1
s2=range(sum of v)- 2(s1)

we have v 1 6 11 5

T T T T F F | F T T T T
0 1 2 3 4 5 | 6 7 8 9 10

for min difference we took half array

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> isSubset(int arr[], int n, int sum) {
	// DP - matrix
	bool t[n + 1][sum + 1];
	// initialization
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0)
				t[i][j] = false;
			if (j == 0)
				t[i][j] = true;
		}
	}
// taking from the 2nd row and 2nd column
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; // include or exclude
			else
				t[i][j] = t[i - 1][j]; // exclude
		}
	}

	// contains all subset sums possible with n elements
	// creating a vector variable to store all the element of the last row
	vector<int> v;
	for (int j = 0; j <= sum; j++) // from the range we need to exclude the element which is not there in the existing problem
		if (t[n][j] == true) // keep true to only those place whose subset sum exist
			v.push_back(j); // store in the vector

	return v;
}

int minSubsetSumDiff(int arr[], int n) {
	int range = 0;
	for (int i = 0; i < n; i++)
		range += arr[i]; // taking sum of the array for range

	vector<int> v = isSubset(arr, n, range);
	int mn = INT_MAX;
	for (int i = 0; i < v.size(); i++) // iterating through the last row of the matrix
		mn = min(mn, abs(range - 2 * v[i])); // taking minimum from the last row

	return mn;
}

signed main() {
	int n;
	cout<<"Enter number of elements in array\n";
	cin >> n;
	int arr[n];
	cout<<"Enter elements in array\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout<<"Min difference in subset is "<< minSubsetSumDiff(arr, n);
	return 0;
}

