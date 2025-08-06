#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pwwkew", str = "", maxs = "";

    for (int right = 0; right < s.length(); right++)
    {
        char c = s[right];

        int count = 0, j = 0;
        while (j < str.length())
        {
            if (c == str[j])
            {
                maxs = ( str.length() > maxs.length() )? str : maxs;
                str="";
                break;
            }
            else count++;
            j++;
        }
        if(count == str.length()) str += c;
    }

    cout << maxs;

    return 0;
}