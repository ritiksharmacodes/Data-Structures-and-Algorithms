#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1};

    int low = 0, high = nums.size() - 1, ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int leftIndex = mid - 1;
        int rightIndex = mid + 1;

        int leftEl = (leftIndex < 0)? -1 : nums[leftIndex];
        int rightEl = (rightIndex >= nums.size())? -1 : nums[rightIndex];

        if (nums[mid] > leftEl && nums[mid] > rightEl)
        {
            ans = mid;
            break;
        }
        else if (nums[mid] > leftEl && nums[mid] < rightEl)
        {
            low = mid+1;
        }
        else if (nums[mid] < leftEl && nums[mid] > rightEl)
        {
            high = mid-1;
        }
        else if (nums[mid] < leftEl && nums[mid] < rightEl)
        {
            low = mid+1;
        }
    }

    cout << ans;

    return 0;
}