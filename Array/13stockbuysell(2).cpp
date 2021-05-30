//stock buy and sell I - one by one - Any number
//Approach 2
//O(n) O(1)

//if next element is greater we
//take difference add it otherwise ignore it

#include<bits/stdc++.h>
using namespace std;
int maxProfit(int price[],int n)
{
  int profit=0;
  for(int i=1;i<n;i++)
  {
      if(price[i]>price[i-1])
        profit+=(price[i]-price[i-1]);
  }
  cout<<profit;
}
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
        cin>>price[i];
    maxProfit(price,n);
    return 0;
}


