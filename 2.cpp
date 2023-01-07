#include <bits/stdc++.h>
using namespace std;

// #2 - Combination Sum with a twist.

void solve(vector<vector<int>> &ans, vector<int> &path, int n, int k, int s)
{
    if (n == 0 && k == 0)
    {
        ans.push_back(path);
        return;
    }
    if (k == 0)
        return;

    for (int i = s; i <= 9; i++)
    {
        path.push_back(i);
        solve(ans, path, n - i, k - 1, i + 1);
        path.pop_back();
    }
    return;
}

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<vector<int>> ans;
    vector<int> path;

    solve(ans, path, n, k, 1);
    return ans;
}

int main()
{
    return 0;
}