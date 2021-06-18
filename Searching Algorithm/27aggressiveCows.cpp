
/*
Aggressive cows
sort: o(n log n) + O( log n) * n(isPossible for loop)
O(n log n) O(1)

Cows don't like this barn layout and become
aggressive towards each other once put into a stall.
o prevent the cows from hurting each other, FJ wants
to assign the cows to the stalls, such that the minimum
distance between any two of them is as large as possible.
What is the largest minimum distance?

i/p:
1
5 3
1 2 8 4 9

o/p: 3
FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.
*/

   #include <bits/stdc++.h>
    using namespace std;
    bool isPossible(int a[], int n, int cows, int minDist) {
        int cntCows = 1;
        int lastPlacedCow = a[0];
        for(int i = 1;i<n;i++) {
            if(a[i] - lastPlacedCow >= minDist) {
                cntCows++;
                lastPlacedCow = a[i];
            }
        }
        if(cntCows >= cows) return true;
        return false;
    }
    int main() {
    	int t;
    	cin >> t;
    	while(t--) {
    	    int n, cows;
    	    cin >> n >> cows;
    	    int a[n];
    	    for(int i = 0;i<n;i++) cin >> a[i];
    	    sort(a,a+n);

    	    int low = 1, high = a[n-1] - a[0];

    	    while(low <= high) {
    	        int mid = (low + high) >> 1;

    	        if(isPossible(a,n,cows,mid)) {
    	            low = mid + 1;
    	        }
    	        else {
    	            high = mid - 1;
    	        }
    	    }
    	    cout << high << endl;
    	}
    	return 0;
    }


