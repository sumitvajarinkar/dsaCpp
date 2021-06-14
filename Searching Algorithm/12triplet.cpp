/*Given an sorted/unsorted array and a number X, we need to
find if there is a triplet in the array with sum equals to X.

sorted :
		1. Use 2 pointer gives O(n^2) O(1)
		2. Hashing- O(n^2) O(n)

unsorted :
		1. use 2 pointer - O(n log n) [to sort] + O(n^2) = O(n^2)
		2. Hashing gives O(n^2) O(n)

sorted i/p
i/p : 2 4 8 9 11 12 20 30 Sum: 25
o/p yes(2+11+12)
*/
#include <bits/stdc++.h>
using namespace std;

bool triplet(int arr[], int n, int sum)
{
	int l, r;

	sort(arr, arr + n); //take O(n log n)

	for (int i = 0; i < n - 2; i++)
	{
		l = i + 1;

		r = n - 1;
		while (l < r) {
			if (arr[i] + arr[l] + arr[r] == sum) {
				cout<<"Triplet is "<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
				return true;
			}
			// if sum < given sum l++
			else if (arr[i] + arr[l] + arr[r] < sum)
				l++;
			// if sum > given sum r--
			else
				r--;
		}
	}
	return false;
}

int main()
{
int n,sum;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>sum;
	triplet(arr,n,sum);
	return 0;
}
