#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> positives;
    vector<int> negatives;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++)
    {
        if (nums[i]<=0) negatives.push_back(nums[i]);
        else positives.push_back(nums[i]);
    }

    int p = 0;
    while( p<positives.size() && p<negatives.size() )
    {
        ans.push_back(positives[p]);
        ans.push_back(negatives[p]);
        p++;
    }

    while( p<positives.size() )
    {
        ans.push_back(positives[p]);
        p++;
    }

    while( p<negatives.size() )
    {
        ans.push_back(negatives[p]);
        p++;
    }

//    for(int i=0; i<negatives.size(); i++) cout<<negatives[i]<<endl;
//    for(int i=0; i<positives.size(); i++) cout<<positives[i]<<endl;
//    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<"  ";
}
