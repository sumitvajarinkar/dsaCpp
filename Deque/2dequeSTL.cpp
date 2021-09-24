//Deque using STL in C++
/*

Doubly ended queue

insert/delete from head as well as tail
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    for(int i=0;i<d.size();i++)
        cout<<d[i]<<" ";
    cout<<endl;

    //10 20 30 40

    d.push_front(5);
    //5 10 20 30 40
    d.push_back(45);

    for(int i=0;i<d.size();i++)
        cout<<d[i]<<" ";
    //5 10 20 30 40 45
    return 0;
}
