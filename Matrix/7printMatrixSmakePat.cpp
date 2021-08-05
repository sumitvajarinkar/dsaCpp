//Print matrix in snake pattern
//o(r*c)

/*
i/p:
int mat[r][c] = {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
o/p: 1 2 3 4 8 7 6 5 9 10 11 12
*/

#include<bits/stdc++.h>
using namespace std;

const int r = 3, c = 2;
void printMatrixSnakePat(int mat[r][c])
{
    for(int i=0; i<r; i++)
    {
        //for even print Left to right
        if(i%2==0)
        {
            for(int j=0; j<c; j++)
                cout<<mat[i][j]<<" ";
        }
        //for odd print Right to left
        else
        {
            for(int j=c-1; j>=0; j--)
                cout<<mat[i][j]<<" ";
        }
    }
}
int main()
{

    int mat[r][c] =
    {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    printMatrixSnakePat(mat);

    return 0;
}
