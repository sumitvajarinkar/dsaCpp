/*Multidimensional arrays
array 	10 	20	30  40  50  60  70
index  100 104 108 112 116 120 124

array[3][2] : {{10,20},
			  {30,40},
			  {50,60}}

always [R][C]
here are 3 rows and 2 columns.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}
