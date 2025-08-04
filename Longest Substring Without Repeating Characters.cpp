#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pwwkew", str="";
    int left = -1, maxe=0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int count = 0, j = 0;
        while (j < str.length())
        {
            if (c != str[j])
                count++;
            else
            {
                left = i;
                break;
            }
            j++;
        }

        if (count == str.length()) str = s.substr( left, (i-left)+1 );
        
        maxe = max( maxe, int(str.length()) );
    }
    
    cout << maxe << "  " << str ;

    return 0;
}