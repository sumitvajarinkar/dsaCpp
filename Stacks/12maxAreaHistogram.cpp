/// Max area of Histogram (Maximum Rectangular Area in a Histogram)
//O(n) O(n)

//i/p:n=7, 6 2 5 4 5 1 6
//o/p:12

/*
	arr	  6 2 5 4 5 1 6

	NSR  2  1 4 1 1 -1 -1
	NSL -1 -1 2 2 4 -1 1

	arr			6 2 5 4 5 1 6
	NSR - NSL = 2 6 2 4 2 8 2

	width= NSR-NSL-1=4-1*4 = 12
*/

/*
stack = .first
vector = .second
*/

#include<bits/stdc++.h>
using namespace std;

  int getMaxArea(int arr[], int n)
    {
    vector<int> left,right;
    stack<pair<int,int>> s1,s2;

    int pseudo_index =-1;
    int pseudo_index1 =n

    //Left - NSL
    for (int i=0;i<n;i++)
    {
      if (s1.size()==0)
      {
        left.push_back(pseudo_index);
      }
      else if (s1.size()>0 && s1.top().first<arr[i])
      {
        left.push_back(s1.top().second);
      }
      else if (s1.size()>0 && s1.top().first>=arr[i])
      {
         while(s1.size()>0 && s1.top().first>=arr[i])
         {
           s1.pop();
         }
        if (s1.size()==0)
        {
          left.push_back(pseudo_index);
        }
        else
        {
          left.push_back(s1.top().second);
        }
      }
      s1.push({arr[i],i});
    }

    //Right - NSR
    for (int i=n-1;i>=0;i--)
    {
      if (s2.size()==0)
      {
        right.push_back(pseudo_index1);
      }
      else if (s2.size()>0 && s2.top().first<arr[i])
      {
        right.push_back(s2.top().second);
      }
      else if (s2.size()>0 && s2.top().first >= arr[i])
      {
        while(s2.size()>0 && s2.top().first >= arr[i])
        {
          s2.pop();
        }
        if (s2.size()==0)
        {
          right.push_back(pseudo_index1);
        }
        else
        {
          right.push_back(s2.top().second);
        }
      }
      s2.push({arr[i],i});
    }

//    for NSR we need to reverse it
    reverse(right.begin(),right.end());
    int m=INT_MIN;
    for (int i=0;i<n;i++)
    {
      m=max(m,(right[i]-left[i]-1)*arr[i]); // taking max after finding area
    }
    return m;
  }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<getMaxArea(arr,n);

    return 0;
}
