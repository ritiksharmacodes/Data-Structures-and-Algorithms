#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=15;
    vector<string> ans;

    for(int i=1; i<=n; i++)
    {
        if(i%3 == 0 && i%5 == 0) ans.push_back("FizzBuzz");
        else if(i%3 == 0) ans.push_back("Fizz");
        else if(i%5 == 0) ans.push_back("Buzz");
        else ans.push_back(to_string(i));
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<< ans[i] << "  ";
    }
}
