
#include<bits/stdc++.h>
using namespace std;
/*
fun(3)3 follow below step again
  	|
	fun(2)2, fun(2-1) 1
	  	|
		fun(1) 1
		  	|
			fun(0)
1
2
1
3
1
2
1
*/

void fun(int n){
if(n==0)		//base case
	return;
fun(n-1);
cout<<n<<endl;
fun(n-1);

}

int main(){
fun(3);
return 0;

}

