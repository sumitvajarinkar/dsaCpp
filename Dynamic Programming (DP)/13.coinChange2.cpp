///Coin change II - Minimum number of coins
/*
i/p: n=3
arr[]=1,2,3
sum=5

o/p: 2 (2,3)

2+3=5 these 2 coins require to get desire sum

*/

#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX-1

int coinChange2(int arr[], int n, int sum){
	int t[n + 1][sum + 1];

	// initialization
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (j == 0)
				t[i][j] = 0;
			if (i == 0)
				t[i][j] = INF;
			//for 1st row
			if (i == 1) {
				if (j % arr[i - 1] == 0)
					t[i][j] = j / arr[i - 1];
				else
					t[i][j] = INF;
			}
		}
	}

	//need to initialize [0][0] = 0
	t[0][0] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= sum; j++)
			if (arr[i - 1] <= j)
				// INT_MAX -1 + 1 = INT_MAX
				t[i][j] = min(t[i - 1][j], 1 + t[i][j - arr[i - 1]]);
			else
				t[i][j] = t[i - 1][j];

	return t[n][sum];
}

int main(){
  int n,sum;
    cout<<"Enter the no. of coins in array\n";
    cin>>n;
    cout<<"Enter coins in array\n";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter sum\n";
    cin>>sum;
    cout<<"Number of coins are "<<coinChange2(arr,n,sum);

}
