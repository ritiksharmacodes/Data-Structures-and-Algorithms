#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,45,76,100,-1,287,0,278,1,2,2,2,2,29,6,76,163,30,0,0,0,0,1,1,1,1,1};
    int length = sizeof(arr) / sizeof(int);
    map<int, int> mpp;

    for(int i=0; i<length; i++)
    {
        mpp[ arr[i] ] = mpp[ arr[i] ] + 1;
    }


    for(map<int, int> :: iterator it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it -> first << " occurs: " << it -> second << (((it -> second) == 1)? " time" : " times") <<endl;
    }

    return 0;
}
