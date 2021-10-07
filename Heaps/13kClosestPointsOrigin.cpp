/// K Closest points to origin
//O(n log n) O(n)

/*
i/p : point = [[3, 3], [5, -1], [-2, 4]], K = 2
o/p : [[3, 3], [-2, 4]]
Square of Distance of origin from this point is
(3, 3) = 18
(5, -1) = 26
(-2, 4) = 20
So the closest two points are [3, 3], [-2, 4].

3,3 =9
5,-1=26
-2,4=20

in map
5,-1=26
-2,4=20
3,3 =9

traverse till k, map will be

-2,4=20
3,3 =9

*/

#include<bits/stdc++.h>
using namespace std;

void kClosest(vector<vector<int>> pts, int k)
{

    // In multimap values gets automatically sorted based on
    // their keys which is distance here
    multimap<int, int> mp;
    for(int i = 0; i < pts.size(); i++)
    {
        int x = pts[i][0], y = pts[i][1];
        mp.insert({(x * x) + (y * y) , i});
    }

    for(auto it = mp.begin(); it != mp.end() && k > 0; it++, k--)
        cout << "[" << pts[it->second][0] << ", "
             << pts[it->second][1] << "]" << "\n";
}

// Driver code
int main()
{
    vector<vector<int>> points = { { 3, 3 },
                                   { 5, -1 },
                                   { -2, 4 } };

    int K = 2;

    kClosest(points, K);
    return 0;
}

