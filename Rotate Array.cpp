#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// 1st solution -- bad solution -->
//void rotatE(vector<int>& nums, int k)
//{
//    // performing the main operation below
//    vector<int> temp;
//    temp.insert( temp.begin(), nums.end()-k, nums.end() );
//    nums.erase( nums.end()-k, nums.end() );
//    nums.insert( nums.begin(), temp.begin(), temp.end() );
//
//    // printing the vector below
//    for (vector<int>::iterator it = nums.begin(); it!=nums.end(); it++ )
//    {
//        cout << (*it) << endl;
//    }
//}

// 2nd solution -- bad solution (too slow) -->
//void rotatE(vector<int>& nums, int k)
//{
//    // performing the main operation below
//    for(int i=1; i<=k; i++)
//    {
//        nums.insert( nums.begin(), *(nums.end()-1) );
//        nums.erase( nums.end()-1 );
//    }
//
//    // printing the vector below
//    for (vector<int>::iterator it = nums.begin(); it!=nums.end(); it++ )
//    {
//        cout << (*it) << endl;
//    }
//}

// 3rd solution -- Accepted -->
 void rotatE(vector<int>& nums, int k) {
    k = k % nums.size();

    if (k != 0) {
        vector<int> temp;
        temp.insert(temp.begin(), nums.end() - k, nums.end());
        nums.erase(nums.end() - k, nums.end());
        nums.insert(nums.begin(), temp.begin(), temp.end());
    }

//    printing the vector below
    for (vector<int>::iterator it = nums.begin(); it!=nums.end(); it++ )
    {
        cout << (*it) << endl;
    }
}


int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;

    rotatE(nums, k);
}
