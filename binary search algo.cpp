#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int first = 0;
    int last = nums.size() - 1;

    while (first <= last)
    {
        int mid = first + (last - first) / 2;   // did this to avoid overflow in the cas if INT_MAX as 'first' or 'last'

        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << search(nums, 91);
}