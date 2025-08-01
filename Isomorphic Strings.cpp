#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "badc", t = "baba", fin="";
    map<char, char> mpp;

    for(int i=0; i<s.length(); i++)
    {
        for (auto j : mpp)
        {
            if (j.second == t[i] && j.first != s[i])
            {
                cout<<"false";
                return false;
            }
        }
        mpp[s[i]] = t[i];
    }

    for(int i=0; i<s.length(); i++)
    {
        fin += mpp[ s[i] ];
    }

    cout<<fin;


}
