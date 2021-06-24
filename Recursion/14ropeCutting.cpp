//Rope cutting problem
//We need to find how much maximum piece will cut of given size
/*
i/p: n=5 a=2,b=5,c=1
o/p: 5(5 piece of length 1)

i/p: n=23 a=12,b=9,c=11
o/p: 2(2 piece of 12+11)

i/p: n=5 a=4, b=2, c=6
o/p: not possible
*/

#include<bits/stdc++.h>
using namespace std;

int maxCuts(int n,int a,int b,int c){
if(n==0)
	return 0;
if(n<0)
	return -1;
int res = max(maxCuts(n-a, a, b, c),
			max(maxCuts(n-b, a, b, c),
				maxCuts(n-c, a, b, c)));

if(res==-1)
	return -1;
return res+1;

}

int main(){
int n,a,b,c,res;
cin>>n>>a>>b>>c;
res=maxCuts(n,a,b,c);
if(res)
	cout<<res;
else
	cout<<"Not possible";
}
