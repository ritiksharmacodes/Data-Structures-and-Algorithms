#include <iostream>
using namespace std;

int main()
{
    string s = "the sky is blue", temp = "", ans="";

    for(int i=0; i<s.length(); i++)
    {
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') )
        {
            temp += s[i];

            if( i == s.length()-1 )
            {
                if(temp.length()!=0) ans = " "+ temp + ans;
            }
        }
        else if(s[i]==' ')
        {
            if(temp.length()!=0) ans = " "+ temp + ans;
            temp="";
        }
    }
    ans.erase(0,1);

    cout<<"$"<<ans<<"$";
}
