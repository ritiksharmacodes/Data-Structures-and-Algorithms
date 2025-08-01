#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "()()", ans="";
    stack<char> st;
    int start = -1, finish = -1;

    for(int i=0; i<s.length(); i++)
    {
        if(st.size() == 0) start = i;

        if( s[i] == ')' ) st.pop();
        else st.push( s[i] );

        if(st.size() == 0)
        {
            finish = i;

            string temp = s.substr( start+1, (finish-start)-1 );
            ans += temp;
        }
    }

    cout<<ans;
}
