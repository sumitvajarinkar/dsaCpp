//Transpose of matrix and reverse column
//O(n^2) O(1)

/*
i/p: int mat[r][c] = {{1,2,3,4},
					 {5,6,7,8},
					 {9,10,11,12},
					 {13,14,15,16}};
o/p:
transpose :
     1 5 9 13
	 2 6 10 14
	 3 7 11 15
	 4 8 12 16

reverse column :
	 4 8 12 16
	 3 7 11 15
	 2 6 10 14
	 1 5 9 13
*/

#include<bits/stdc++.h>
using namespace std;

const int n = 4;
void transpose(int mat[n][n])
{

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            swap(mat[i][j],mat[j][i]);


    for(int i=0; i<n; i++)
    {
        int low=0,high=n-1;
        while(low<high)
        {
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;
        }
    }
}
int main()
{
    int arr[n][n] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    transpose(arr);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

