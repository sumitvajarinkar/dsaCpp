
#include<bits/stdc++.h>
using namespace std;

int main(){

// will terminate after space
//	string str1;
//    cout<<"Enter your name\n";
//    cin>>str1;
//    cout<<str1<<endl;

// it will print without termination
    string str2;
    cout<<"Enter your name\n";
    getline(cin,str2);
    cout<<str2<<endl;

//Iteration of str
	string str3;
	str3="rahul";
	for(int i=0;i<str3.length();i++)
		cout<<str3[i];
	cout<<endl;
	for(auto x:str3)
		cout<<x;

	return 0;
}
