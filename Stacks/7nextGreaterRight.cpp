
///Next greater element (NGR - Nearest greater to RIGHT)
//Approach 1 - O(n^2) O(1) - 2 loop
//Approach 2 - O(n) O(n) - 1 loop

/*
Approach 2 - O(n) O(n) - 1 loop - using Stack
For right we traverse RIGHT to LEFT

1.Last one is always -1.
2.Take empty stack and vector
3.stack empty -> -1(vector)
4.s.top > arr[i] -> s.top(vector)
5.s.top <= arr[i] :
					1.s.top <=arr[i] -> s.pop
					2.stack empty -> -1(vector)
6.as we traverse reverse we need to reverse Vector at the end.
*/

//i/p : n=7, 10  18  12  4   6   2   8
//o/p :      18  -1  -1  6   8   8   -1

#include<bits/stdc++.h>
using namespace std;
int nextGreaterRight(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=n-1; i>=0; i--)
    {
    	//corner case - push(-1) in vector
        if(s.size()==0)
            v.push_back(-1);

		//if s.top > curr then push in vector
		//push greater element
        else if(s.size()>0 && s.top() > arr[i])
            v.push_back(s.top());

		//if s.top <= curr then
		//					   1.still s.top <= curr after s.pop
		//                     2.Check corner case - push(-1) in vector
        else if(s.size()>0 && s.top() <= arr[i])
		{
			//remove smaller element
			while(s.size()>0 && s.top() <= arr[i])
				s.pop();
			//corner case - push(-1) in vector
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top());
		}
		//after every iteration push element in stack
		s.push(arr[i]);
}
	// right to Left traverse so finally reverse the vector for desired o/p.
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

}
int main()
{
    int n;
    cout<<"Enter number of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    nextGreaterRight(a,n);
    return 0;
}


