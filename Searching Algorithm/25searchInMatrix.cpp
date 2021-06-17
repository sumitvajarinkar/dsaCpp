//Search in Row wise & Column wise Sorted (Array Matrix)
//O(n + m)
//n x m : i x j
/*
i/p: mat[4][4] : {10 20 30 40
				  15 25 35 45
				  27 29 37 48
				  32 33 39 50}	x=29
o/p: true
*/
#include <iostream>
using namespace std;
int searchInMatrix(int mat[4][4],int n,int x)
{
	int i=0,j=n-1;                     
	//here we start to find element from right top element
	//1st row last column
	while(i>=0 && i<n && j>=0 && j<n)
	{
		if(mat[i][j]==x)
			return 1;
		else if(mat[i][j] > x)
			j--;
		else if(mat[i][j] < x)
			i++;
	}
	return -1;
}

int main()
{
  	int x,ans;
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    cout<<"Enter searching element\n";
    cin>>x;
    ans=searchInMatrix(mat,4,x);
    if(ans==1)
    	cout<<"Element found";
    else
    	cout<<"Element not found";

}
