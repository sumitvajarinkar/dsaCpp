/// Frequency Sort
//O(n log k) O(n)

/*
i/p:n=7, arr[]=1,1,4,3,2,1,2
o/p:1,1,1,2,2,3,4

We need to print number, frequency wise

map will store :
frequency  element
	3  :	1
	2  :	2
	1  :	3
	4  :	4


print frequency wise
frequency element
	1,1,1,2,2,3,4

*/

#include<bits/stdc++.h>
using namespace std;

int frequencySort(int arr[],int n)
{

//map frequency of elements
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)
        mp[arr[i]]++;

	//stored in map frequency wise
    priority_queue<pair<int,int>>maxh;
    for(auto i=mp.begin(); i!=mp.end(); i++)
    {
        maxh.push({i->second,i->first});
    }
//To print top frequency wise element ( element store at second)
    while(maxh.size()>0)
    {
    	//frequency store at second
        int freq=maxh.top().first;
        //element store at second
        int ele=maxh.top().second;

        for(int i=1; i<=freq; i++)
            cout<<ele<<" ";

		//pop after print
            maxh.pop();
    }
}

int main()
{

    int n;
    cout<<"Enter no. of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    frequencySort(arr,n);
}


