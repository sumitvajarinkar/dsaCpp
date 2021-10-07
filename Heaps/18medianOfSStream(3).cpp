/// Median of a Stream
//Approach 3
//O(n log n)

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

if odd count maximum in 1st heap
if even count avg of max in 1 and min in 2 heaps.

i=0, 25  			_

i=1, 7   			25

i=2, 7 10           25

i=3, 7 10           15,25

i=4, 7,10,15        25,25

i=5



*/

#include <bits/stdc++.h>
using namespace std;

void printMedians(int arr[],int n){

	//2 heaps
    priority_queue<int> s;
    priority_queue<int, vector<int>,greater<int>> g;

    //1st element median is same
    s.push(arr[0]);
    cout<<arr[0]<<" ";


    for(int i=1;i<n;i++){
        int x=arr[i];
        if(s.size()>g.size())
        {
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else
               g.push(x);
            cout<<(s.top()+g.top())/2.0<<" ";
        }

        else{
            if(x<=s.top()){
                s.push(x);
            }else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout<<s.top()<<" ";
        }
    }
}

int main()
{
	int keys[] = { 12, 15, 10, 5, 8, 7, 16};

    printMedians(keys,7);

	return 0;
}
