#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string prefixReturner(string str1, string str2)
{
    int length = 0;

    if( str1.length() == str2.length() ) {
        length = str1.length();
    }
    else if( str1.length() < str2.length() ) {
        length = str1.length();
    }
    else {
        length = str2.length();
    }


    string ans = "";
    for (int i = 0; i < length; i++) {
        if (str1[i] == str2[i])
            ans += str1[i];
        else
            break;
    }

    return ans;
}

int main()
{
    vector<string> strs = {"cir","car"};

    if( strs.size() == 1 ) {
        cout << strs[0];
        return 0;
    }

    string curLongestPrefix = prefixReturner( strs[1], strs[0] );

    if( strs.size() == 2 ) {
        cout << curLongestPrefix;
        return 0;
    }

    for (int i = 1; i < strs.size(); i++) {
        curLongestPrefix = prefixReturner(curLongestPrefix, strs[i]);
    }

    cout << curLongestPrefix;
}

