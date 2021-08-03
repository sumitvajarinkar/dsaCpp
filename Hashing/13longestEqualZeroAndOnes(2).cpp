//Longest sub array with equal 0's & 1's
//Approach 2
//O(n) O(n)

//i/p: n=7, 1 0 1 1 1 0 0
//o/p: 6(1st to last index)

#include<bits/stdc++.h>
using namespace std;

int subArrayEqualZeroOnes(int arr[],int n){
	//replaced all 0 with 1
    for(int i = 0; i < n; i++)
     arr[i] = (arr[i] == 0) ? -1 : 1;

    unordered_map<int, int> m;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        //if sum is 0 then increment
        if(sum == 0)
         maxLen = i+1;

        if(m.find(sum+n) != m.end())
        {
            if(maxLen < i - m[sum+n])
             maxLen = i - m[sum+n];

        }
        else m[sum + n] = i;
    }

    return maxLen;
}
int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Size of equal zero & ones is "<<subArrayEqualZeroOnes(arr,n);
    return 0;

}
