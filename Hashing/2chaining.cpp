//This is implementation of chaining

#include<bits/stdc++.h>
using namespace std;
struct MyHash
{
    int bucket;
    list<int> *table;
    MyHash(int b)
    {
        bucket = b;
        table = new list<int>[bucket];
    }
    //Insert element
    void insert(int k)
    {
        int i = k % bucket; //for indexing
        table[i].push_back(k);
    }
    //Search element
    bool search(int k)
    {
        int i = k % bucket;
        for (auto x : table[i])
            if (x == k)
                return true;
        return false;
    }
    //Remove element
    void remove(int k)
    {
        int i = k % bucket;
        table[i].remove(k);
    }
};

// Driver method to test Map class
int main()
{
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);
}
