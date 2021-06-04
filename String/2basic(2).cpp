
#include<bits/stdc++.h>
using namespace std;

int main(){
//	char str1[]="rahul";
//	char str2[]="neha";
	char str1[]="abc";
	char str2[]="bcd";
	int res = strcmp(str1,str2);
	if(res>0){
		cout<<"greater";
	}
	else if(res == 0){
		cout<<"same";
	}
	else{
		cout<<"smaller";
	}

	return 0;
}
