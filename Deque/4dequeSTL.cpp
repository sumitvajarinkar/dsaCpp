///Deque using STL in C++

/*
Doubly ended queue
insert/delete from head as well as tail
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d={10,20,30,40};

    //before 10 index
    auto it = d.begin();
    it=d.insert(it,7);
    //7 10 20 30 40
    for(int i=0;i<d.size();i++)
        cout<<d[i]<<" "; //before 10 d= 7 10 20 30 40
    cout<<endl;

    it=d.insert(it,3); //before 7 d=  3 7 10 20 30 40
    it=d.insert(it,4); //before 3 d= 4 3 7 10 20 30 40
    for(int i=0;i<d.size();i++)
        cout<<d[i]<<" ";
    cout<<endl;

    cout<<(*it)<<endl; //at 4

    //0+1 = 1, 3 delete
    it=d.erase(it+1);//1st index, d= 4 7 10 20 30 40

    for(int i=0;i<d.size();i++)
        cout<<d[i]<<" ";
    cout<<endl;

    cout<<(*it)<<endl; //on 7 now

    for(int i=0;i<d.size();i++)
            cout<<d[i]<<" ";
    return 0;
}
