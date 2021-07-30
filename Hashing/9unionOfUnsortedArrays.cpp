//Union of unsorted arrays - distinct common
//O(m+n) O(m+n)

//i/p: m=5, n=4, a=10 15 20 5 30, b=30 5 30 80
//o/p: (total distinct)

#include<bits/stdc++.h>
using namespace std;
int unioned(int a[],int b[],int m,int n){
unordered_set<int>h(a,a+m);
//only insert distinct
for(int i=0;i<n;i++)
	h.insert(b[i]);
return h.size();
}


int main(){
	int m;
    cout<<"Enter the number of elements A\n";
    cin>>m;
    int a[m];
    cout<<"Enter the elements of A\n";
    for(int i=0; i<m; i++)
        cin>>a[i];
	int n;
    cout<<"Enter the number of elements B\n";
    cin>>n;
    int b[n];
    cout<<"Enter the elements of B\n";
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<"Union count : "<<unioned(a,b,m,n);
    return 0;

}
