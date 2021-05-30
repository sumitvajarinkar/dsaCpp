//Leader in an Array
//Approach 1
// O(n^2) O(1)

/* Element which have right elements are small then that element is leader
   i/p 7 10 4 3 6 5 2
   o/p 10 6 5 2
 Right side of 10 6 5 2 have smaller element than themselves
 if we get right side element smaller in 2nd loop we will print current element
*/

#include<bits/stdc++.h>
using namespace std;

int leader(int arr[],int n)
{
  for(int i=0;i<n;i++)
    {
       bool flag=true;
     for(int j=i+1;j<n;j++)
      {
        if(arr[i]<=arr[j]) 	//run loop till we get greater element at right flag false
        {
            flag=false;                         // i/p 7 10 4 3 6 5 2
            break;                              // o/p 10 6 5 2
        }
      }
      //if loop out then we will get leader as flag true
    if(flag==true)
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	leader(arr,n);
    return 0;
}

