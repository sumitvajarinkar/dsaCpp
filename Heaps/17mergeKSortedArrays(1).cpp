///Merge k sorted arrays
//Approach 1
//O(nk log nk)

/*
i/p: arr1[10,20,30], arr2[5,15], arr3[1,9,11,18]
o/p:1 5 9 10 11 15 18 20 30


*/
#include <bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(vector<vector<int> > arr)
{
    vector<int> res;

    //insert all arrays is 1 vector and sort it
    for(vector<int> v: arr)
    {
        for(int x:v)
            res.push_back(x);
    }

    sort(res.begin(),res.end());

    return res;
}

int main()
{

	vector<vector<int> > arr{ { 10, 20, 30 },
                              { 5, 15 },
                              { 1, 9, 11, 18 } };

    vector<int> res = mergeKArrays(arr);

    cout << "Merged array is " << endl;
    for (auto x : res)
        cout << x << " ";

    return 0;
}
