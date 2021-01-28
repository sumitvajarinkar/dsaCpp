//stock buy and sell
//Approach 1
//O(n^2)

#include<bits/stdc++.h>
using namespace std;
int maxProfit(int price[],int start,int end)
{
 	if(end<=start)
 		return 0;
 		
 	int profit=0;                   //here we compare 1 by 1
 	for(int i=start;i<end;i++)
 		{
 			for(int j=i+1;j<=end;j++)
 			{
 				if(price[j]>price[i])
 				{
					//recursive approach
 					int curr_profit=price[j]-price[i]+ maxProfit(price,start,i-1) + maxProfit(price,j+1,end);
 					profit=max(profit,curr_profit);
				 }
			 }
		 }
		 return profit;
}
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
        cin>>price[i];
    cout<<maxProfit(price,0,n);
    return 0;
}




