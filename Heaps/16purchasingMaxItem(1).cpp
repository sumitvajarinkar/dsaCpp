///Purchasing Maximum Items
//Approach 1
//O(n log n) O(1)

/*
i/p: n=5, cost[]={1,12,5,111,200}, sum=10
o/p: 2 (1 and 5)

1. sort
2. i=0, 10-1=sum=9, res=1
	i=1,12>10 break
	i=2 9-5=sum=4,res=2
	i=3 break
	i=4 break
*/
#include<bits/stdc++.h>
using namespace std;

int purchaseMaxItem(int cost[],int n,int sum){
int res=0;
    sort(cost,cost+n);
    for(int i=0;i<n;i++){
        if(cost[i]<=sum){
            sum-=cost[i];
            res++;
        }else{
            break;
        }
    }
    return res;
}

int main(){
int n,sum;
cout<<"Enter no. of items ";
cin>>n;
int cost[n];
cout<<"Enter cost of items ";
for(int i=0;i<n;i++)
	cin>>cost[i];
cout<<"Enter sum ";
cin>>sum;
cout<<purchaseMaxItem(cost,n,sum);
}
