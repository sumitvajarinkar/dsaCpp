///Deque using STL in C++

/*
Doubly ended queue
insert/delete from head as well as tail


if min push at front
    else max push back
if min pop it from front
    else max pop t from back
*/


#include<bits/stdc++.h>
using namespace std;
struct myds
{
    deque<int>d;
    void insertmin(int x)
    {
        d.push_front(x);
    }
    void insertmax(int x)
    {
        d.push_back(x);
    }
    int getmin()
    {
        return d.front();
    }
    int getmax()
    {
        return d.back();
    }
    void extractmin()
    {
        d.pop_front();
    }
    void extractmax()
    {
        d.pop_back();
    }

};
int main()
{
    myds md;
    md.insertmin(5);
    md.insertmax(10);
    md.insertmin(3);
    md.insertmax(15);
    md.insertmin(2);
    md.extractmin();
    md.extractmax();
    cout<<md.getmin()<<endl;
    cout<<md.getmax()<<endl;
    md.insertmax(20);
    md.insertmin(1);
    cout<<md.getmin()<<endl;
    cout<<md.getmax()<<endl;
    return 0;
}
