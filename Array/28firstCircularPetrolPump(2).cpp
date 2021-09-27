///First Circular Tour (First Circular Petrol Pump ) 1 unit petrol consume for 1 unit distance
//Approach 2
//O(n) O(1)

/*
i/p: petrol[]={50,10,60,100}, dist[]={30,20,100,10}
o/p: 4 (if we start from 100 we require sufficient petrol to reach 100 again circularly 100 at index 4)


Logic : if curr_petrol becomes negative at Pi, then none of the petrol pumps from P0 to Pi can be solution


P0--------PP--------Pi---------CP-----------
50 --30-- 10 --20-- 60 --100-- 100 --10-- 50

at Pi value becomes -ve

s=0,cp=0,pp=0
i=0, cp=0+50-30=20
i=1, cp=20+10-20=10
i=2, cp=10+60-100=-30 (-ve)

start=3
pp=-30
cp=0

i=3, cp=100-10=90

here cp+pp>0
return index.


*/



#include<bits/stdc++.h>
using namespace std;
int firstpetrolpump(int petrol[],int dist[],int n)
{
    int start=0,curr_petrol=0,prev_petrol=0;
    for(int i=0;i<n;i++)
    {
        curr_petrol+=(petrol[i]-dist[i]);

		//if we get negative value then we store it index in start and prev_petrol for further calulations:D
        if(curr_petrol<0)
        {
            start=i+1;
            prev_petrol+=curr_petrol;
            curr_petrol=0;
        }
    }
    //check for prev+curr>0 then return start+1
    if((curr_petrol+prev_petrol)>=0)
		return start+1;
	else
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

