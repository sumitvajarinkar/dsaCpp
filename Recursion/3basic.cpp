#include<bits/stdc++.h>
using namespace std;

/*
fun(3)
  3	| 3
	fun(2)
	  2	| 2
		fun(1)
		  1	| 1
			fun(0)
*/
void fun(int n){
if(n==0)		//base case
	return;
cout<<n<<endl;
fun(n-1);
cout<<n<<endl;
}

int main(){
fun(3);
return 0;
}
/*
o/p
3
2
1
1
2
3
*/
