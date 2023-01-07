#include <bits/stdc++.h>
using namespace std;

// #4 - You are given an integer array nums of length n. Return maximum length of Rotation Function.

int maxRotateFunction(vector<int> &nums)
{
    long sum = 0, original = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        original += i * nums[i];
    }

    long maxi = original;
    int n = nums.size();

    for (int i = n - 1; i >= 0; i--)
    {
        original += sum - (nums[i] * n);
        maxi = max(original, maxi);
    }
    return maxi;
}

int main()
{
    return 0;
}
