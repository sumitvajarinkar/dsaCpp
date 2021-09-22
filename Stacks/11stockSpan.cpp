///Stock Span problem
//O(n) O(n)

//Naive approach O(n^2)

//Consecutive smaller or equal before it - NGL
//i/p n=10 15 13 12 14 16 8 6 4 10 30
//o/p 1  1  1  3  5  1 1 1 4  10

/*
arr index  0  1  2  3  4  5  6 7 8   9
arr        15 13 12 14 16 8  6 4 10 30
NGL index -1  0  1   1 -1 4  5 5  4 -1

arr index - NGL index =
0   1  2  3  4  5  6 7 8  9
-1  0  1  1 -1  4  5 5 4 -1

1   1  1  3  5  1  1 1 4  10
*/


/*
stack = .first
vector = .second
*/
#include<bits/stdc++.h>
using namespace std;
vector <int> span(int price[], int n)
{
    //Here store index only
    vector <int> v;
    //Here pair of vector to store (NGL,index)
    stack<pair<int,int>> s;
    for (int i=0; i<n; i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }

        else if (s.size()>0 && s.top().first>price[i])
        {
            v.push_back(s.top().second);
        }

        else if (s.size()>0 && s.top().first<=price[i] )
        {
            while (s.size()>0 && s.top().first<=price[i] )
            {
                s.pop();
            }

            if(s.size()==0)
            {
                v.push_back(-1);
            }

            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({price[i],i}); // take price array and index i inside pair stack
    }
    for (int i=0; i<v.size(); i++)
    {
        v[i]=i-v[i]; // subtract normal index from the vector index v[i]
    }
    return v;
}


int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0; i<n; i++)
        cin>>price[i];
    vector<int>v=span(price,n);
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}
