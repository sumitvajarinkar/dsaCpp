//Search in Row, Column wise - sorted matrix
//O(r+c)

/*
i/p: int mat[r][c] = {{1,2,3,4},
					 {5,6,7,8},
					 {9,10,11,12},
					 {13,14,15,16}};
	x=4
o/p: Found at (0, 3)
*/

#include<bits/stdc++.h>
using namespace std;

const int R = 4, C = 4;

void search(int mat[R][C], int x)
{
    int i  = 0, j = C - 1;

    while(i < R && j >= 0)
    {
        if(mat[i][j] == x)
        {
            cout << "Found at (" << i << ", " << j << ")";

            return;
        }
        else if(mat[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "Not Found";
}

int main()
{
    int mat[R][C] = {{1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int x = 4;

    search(mat, x);

    return 0;
}

