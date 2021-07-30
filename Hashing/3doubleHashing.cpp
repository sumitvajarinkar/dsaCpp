//This is implementation of double hashing
/*
49 56 72
mod with cap is 3
49%3=1
56%3=2
72%3=0
*/
#include<bits/stdc++.h>
using namespace std;

struct myHash
{
    int *arr;
    int cap,size;
    //pass size in c
    myHash(int c)
    {
        cap=c;
        size=0;
        for(int i=0; i<cap; i++)
            arr[i]=-1;
    }
    //calculate mod for hashing
    int hash(int key)
    {
        return key%cap;
    }
    //search
    bool search(int key)
    {
        int h=hash(key);
        int i=h;	//to search hash is present or not at given index
        while(arr[i]!=-1)
        {
            if(arr[i]==key) //if key present at given index
                return true;
            i=(i+1)%cap;    //next index for collision key
            if(i==h)		//circular index
                return false;
        }
        return false;
    }
    bool insert(int key)
    {
        if(size==cap)
            return false;
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
        {
            i=(i+1)%cap;	//move on next index
        }
        if(arr[i]==key)		//key already present
            return false;
        else				//key inserting
        {
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool erase(int key)
    {
        int h=hash(key);
        int i=h;		//to search hash is present or not at given index
        while(arr[i]!=-1)
        {
            if(arr[i]==key)  //if key present at given index
            {
                arr[i]=-2;  //assign -2 as deleted
                return true;
            }
            i=(i+1)%cap;   //move on next
            if(i==h)	  //circular index
                return false;
        }
        return false;
    }
};
int main()
{
    myHash mh(3);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    cout<<mh.search(72)<<endl; //1
    cout<<mh.search(35)<<endl; //0
    cout<<mh.erase(56)<<endl;  //1
    cout<<mh.search(56)<<endl; //0
    return 0;
}
