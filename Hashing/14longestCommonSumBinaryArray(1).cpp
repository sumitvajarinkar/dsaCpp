//Longest common span with same sum binary array
//Approach 1
//O(n^2) O(n)

//i/p:m=6,n=6, a[]=0 1 0 0 0 0, b[]=1 0 1 0 0 1
//o/p: 4 (1st to 4th index)

#include<bits/stdc++.h>
using namespace std;
int longestCommonSum(int a[],int b[],int m,int n){
int res=0;
for(int i=0;i<n;i++){
	int sum1=0,sum2=0;
	for(int j=i;j<n;j++){
		sum1+=a[j];
		sum2+=b[j];
	if(sum1==sum2)
		//to find last index
		res=max(res,j-i+1);
	}
}
return res;
}
int main(){
   int m,n;
    cout<<"Enter the number of elements A\n";
    cin>>m;
    int a[m];
    cout<<"Enter elements\n";
    for(int i=0; i<m; i++)
        cin>>a[i];

	cout<<"Enter the number of elements B\n";
    cin>>n;
    int b[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<"Longest common span with same sum binary array is "<<longestCommonSum(a,b,m,n);
    return 0;
}
