///Sum of all elements between k1’th and k2’th smallest elements
//O(n log n) O(n)

/*
i/p : arr[] = {20, 8, 22, 4, 12, 10, 14},  k1 = 3,  k2 = 6
o/p : 26
         3rd smallest element is 10. 6th smallest element
         is 20. Sum of all element between k1 & k2 is
         12 + 14 = 26
*/

#include<bits/stdc++.h>
using namespace std;

int kThSmallest(int arr[],int n,int k){

// used max heap to find smallest element
priority_queue<int>maxh;
for(int i=0;i<n;i++){
	maxh.push(arr[i]);

	//simply pop MAX element at top if size is > k
	if(maxh.size()>k){
		maxh.pop();
	}
}
return maxh.top();
}

//we find elements between kth smallest and add them.
int sumOfElements(int arr[],int n,int k1,int k2){
    int first=kThSmallest(arr,n,k1);
    int second=kThSmallest(arr,n,k2);

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i] > first && arr[i] < second )
            sum+=arr[i];
    }
    return sum;
}

int main(){

    int n,k1,k2;
    cout<<"Enter no. of element ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
	cout<<"Enter k1 and k2 position ";
	cin>>k1>>k2;
    cout<<"Sum Of Elements is "<<sumOfElements(arr,n,k1,k2);

}


