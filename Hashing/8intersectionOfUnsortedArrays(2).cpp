//Intersection of unsorted arrays - distinct common
//Approach 1
//O(n^2) O(1)

//i/p: m=5, n=4, a=10 15 20 5 30, b=30 5 30 80
//o/p: 2(5,30 intersect only)

#include<bits/stdc++.h>
using namespace std;
int intersect(int a[],int b[],int m,int n)
{
    unordered_set<int>s;
    for(int i = 0; i < m; i++)
      s.insert(a[i]);

    int res = 0;
    //if we get b element in set ++ obviously are distinct
    for(int i = 0; i < n; i++)
    {
        if(s.find(b[i]) != s.end())
        {
            res++;
            //remove to avoid duplicate
            s.erase(b[i]);
        }
    }
    return res;
}


int main()
{
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
    cout<<"Intersected count : "<<intersect(a,b,m,n);
    return 0;

}

