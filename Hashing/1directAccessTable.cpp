//This is direct access table

#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int table[1000]= {0};
    void insert(int i)
    {
        table[i]=1;
    }

    void remove(int i)
    {
        table[i]=0;
    }

    int search(int i)
    {
        return table[i];
    }
};
int main()
{
    MyHash mh;
    mh.insert(10);
    mh.insert(20);
    mh.insert(119);
    cout<<mh.search(10)<<endl; //1
    cout<<mh.search(20)<<endl; //1
    mh.remove(119);
    cout<<mh.search(119)<<endl;//0

    return 0;
}
