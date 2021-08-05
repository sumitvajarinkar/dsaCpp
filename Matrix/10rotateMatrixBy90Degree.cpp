//Rotate by 90 degree (anticlockwise)
//O(n^2) O(n)

/*
i/p: int mat[r][c] = {{1,2,3,4},
					 {5,6,7,8},
					 {9,10,11,12},
					 {13,14,15,16}};
o/p: 4 8 12 16
	 3 7 11 15
	 2 6 10 14
	 1 5 9 13

*/

#include<bits/stdc++.h>
using namespace std;

const int n = 4;
void rotateBy90(int mat[n][n])
{
    int temp[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
			temp[n-j-1][i]=mat[i][j];
	for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
			mat[i][j]=temp[i][j];
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

    rotateBy90(arr);

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

