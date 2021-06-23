#include<bits/stdc++.h>
using namespace std;

//without base case it will give segmentation fault (memory full)

void fun(int n){
if(n==0)		//base case
	return;
cout<<"infinite...\n";
fun(n-1);

}

int main(){
fun(2);
return 0;

}
