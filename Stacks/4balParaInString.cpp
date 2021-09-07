///Check for balanced parenthesis in a string
//O(n) O(n)


/*
Condition is if one parenthesis is opened then it should be closed on its next position
{[(]}) - this is not balanced

i/p: s="({[]))]})"
o/p: No

i/p: s="{[()]}"
o/p: Yes
*/


#include <bits/stdc++.h>
using namespace std;

bool matching(char a,char b){
    return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
}

bool isBalanced(string str){

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else{
        if (s.empty()==true)
            return false;
        else if(matching(s.top(),str[i])==false)
            return false;
        else
            s.pop();
        }
    }
    return (s.empty()==true);
}

int main()
{
    string str;
    cout<<"Enter string incl. (),{},[]\n";
    cin>>str;
    if (isBalanced(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}

