#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pwwkew";
    map<char, int> mpp;
    int left = 0;
    string maxs = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (mpp.find(s[i]) != mpp.end())
        {
            // char exists on the map
            if (mpp[s[i]] >= left)
                left = mpp[s[i]] + 1;
        }
        mpp[s[i]] = i;
        string str = s.substr(left, (i - left) + 1);
        maxs = (str.length() > maxs.length()) ? str : maxs;
    }

    cout << maxs;
}