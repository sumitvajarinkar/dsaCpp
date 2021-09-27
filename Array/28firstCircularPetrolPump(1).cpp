///First Circular Tour (First Circular Petrol Pump ) 1 unit petrol consume for 1 unit distance
//Approach 1
//O(n^2) O(1)

/*
i/p: petrol[]={4,8,7,4}, dist[]={6,5,3,5}
o/p: 2 (if we start from 8 we require sufficient petrol to reach 8 again circularly 8 at index 2)

4 --6-- 8 --5-- 7 --3-- 4 --5-- 4 --6-- 8

using 2 loops
if we start from 8 : 8-5=3+7=10, 10-3=7+4=11, 11-5=6+5=10, 10-8=2
return index of starting point

*/


#include<bits/stdc++.h>
using namespace std;
int firstpetrolpump(int petrol[],int dist[],int n)
{
   for(int start=0;start<n;start++){
    int curr_petrol=0;
    int end=start;
    while(true){
        curr_petrol+=petrol[end]-dist[end];

        //if we get negative value then skip it because -ve petrol will not move further :D
        if(curr_petrol < 0)
            break;

        //for index
        end=(end+1)%n;

        //if we complete circle then return index
        if(end==start)
            return(start+1);
    }
   }
   return -1;
}

int main()
{
    int n;
    cin>>n;
    int petrol[n],dist[n];
    for(int i=0;i<n;i++)
        cin>>petrol[i];
    for(int i=0;i<n;i++)
        cin>>dist[i];
    cout<<firstpetrolpump(petrol,dist,n);
    return 0;
}
