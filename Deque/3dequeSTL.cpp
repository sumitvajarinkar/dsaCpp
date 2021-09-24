///Deque using STL in C++

/*

Doubly ended queue

insert/delete from head as well as tail
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d={5,10,15,20,25};

    ///before 5 index
    auto it = d.begin();

    // at 5
    it++;

    d.insert(it,20);// after 5
    //5,20 10,15,20,25
    d.pop_front();
    //20 10,15,20,25
    d.pop_back();
    //20 10,15,20

    for(auto x:d)
        cout<<x<<" ";
    //20 10,15,20
    cout<<endl;
    cout<<d.front()<<endl; //20
    cout<<d.size(); //4
    return 0;
}
