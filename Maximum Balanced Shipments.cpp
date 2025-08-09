#include <bits/stdc++.h>
using namespace std;

bool balncdShipmntChecker(int first, int last, vector<int> &weight)
{
    int max = INT_MIN;
    for (int i = first; i <= last; i++)
    {
        if (weight[i] > max)
            max = weight[i];
    }

    int lastElOfSubarray = weight[last];

    if (lastElOfSubarray < max)
        return true;
    else
        return false;
}
int checkVec(vector<int> &a, int n)
{
    while (--n > 0 && a[n] == a[0])
        ;
    return n != 0;
}
int main()
{
    vector<int> weight = {19529, 19529, 19529, 19529};
    int ans = 0, i = 0;

    bool ads = is_sorted(weight.begin(), weight.end());
    // cout << ads << "adad";

    cout << checkVec(weight, weight.size()-1) << "adadad";

    while (i < weight.size())
    {

        int counter = 0;
        for (int j = i; j < weight.size(); j++)
        {
            if (i == 0)
                counter += weight[j];

            bool res = balncdShipmntChecker(i, j, weight);
            if (res == true)
            {
                ans++;
                i = j + 1;
                break;
            }
            if (j == weight.size() - 1)
            {
                if (i == 0)
                {
                    int chckr = counter / weight[0];
                    if (chckr == weight.size())
                        return 0;
                }
                i++;
            }
        }
    }
    cout << ans;

    return 0;
}