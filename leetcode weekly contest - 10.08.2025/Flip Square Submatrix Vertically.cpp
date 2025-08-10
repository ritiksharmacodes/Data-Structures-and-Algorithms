#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> grid = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int x = 1, y = 0, k = 3;

    int top = x;
    int bottom = x + (k - 1);

    while (top <= bottom)
    {
        for (int j = y; j <= (y + (k - 1)); j++)
        {
            swap(grid[top][j], grid[bottom][j]);
        }
        top++;
        bottom--;
    }

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            cout << grid[i][j] << "  ";
        }
        cout << endl;
    }
}