//Reverse string
//Approach 1 - using stack O(n) O(n)
//Approach 2 - O(n) O(1)

/*
i/p : "welcome coders"
o/p : "coders welcome"
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(char str[],int l, int h){
    while(l<=h){
        swap(str[l],str[h]);
        l++;
        h--;
    }
}

void reverseWords(char str[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}

int main()
{
    string s;
    cout<<"Enter sentence:\n";
    getline(cin,s);
    int n=s.length();
    char str[n];

//    c_str returns a const char* that points to a null-terminated string (i.e. a C-style string).
//It is useful when you want to pass the "contents" of an std::string to a function that expects
//to work with a C-style string.
    strcpy(str, s.c_str());

    cout<<"After reversing:\n";
    reverseWords(str,n);
    for (int i = 0; i < n; i++)
        cout << str[i];

    return 0;
}
