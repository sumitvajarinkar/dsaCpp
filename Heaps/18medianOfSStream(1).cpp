/// Median of a Stream
//Approach 1
//O(n ^ 2)

/*
i/p: arr[]={25,7,10,15,20}
o/p: 25 16 10 12.5 15 (element wise median


arr[]:25,7,10,15,20
sort: 7 10 15 20 25
for 1st element Median is same
for 2 element Median is sum/2
for 3 element Median is sorted(2th)
for 4 element Median is sum(middle)/2
for 5 element Median is sorted(3rd)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[]={25,7,10,15,20};int n=5;
    double temp[n];
    int size=0;
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
        size++;
        int j=i;
        while(j>0&&temp[j]<temp[j-1]){
        swap(temp[j],temp[j-1]);
        j--;
    }
    if(size%2!=0)
        cout<<temp[size/2]<<" ";
    else
        cout<<(temp[size/2]+temp[(size-1)/2])/2<<" ";

    }

    return 0;
}
