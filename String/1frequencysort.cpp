#include<bits/stdc++.h>
using namespace std;
/*
i/p: str = coding
o/p: c 1
	 d 1
	 g 1
	 i 1
	 g 1
	 o 1

 O(n) O(1)
*/

int main(){
	string str;
	cout<<"Enter any string\n";
	cin>>str;
	int count[26]={0};
	for(int i=0;i<str.length();i++){
		//It will delete 'a'(97) from given char to get index
		//will add in count array ++.
		count[str[i]-'a']++;
	}
	cout<<"Sorted character "<<"Frequencies\n";;
	for(int i=0;i<26;i++){
		if(count[i]>0){
			cout<<"    "<<(char)(i+'a')<<"             ";

			cout<<count[i]<<endl;
		}
	}
	return 0;
}
