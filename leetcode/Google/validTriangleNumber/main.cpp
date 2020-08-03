#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int max(int a, int b) { return a > b ? a : b; }
    int triangleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0, n = nums.size(), pos = 0;
        while ((pos < n) && (nums[pos] == 0))
            pos++;
        if (pos >= (n - 3))
            return 0;
        for (int i = n - 1; i >= max(pos, 2); i--)
        {
            for (int j = i - 1; j >= max(pos, 1); j--)
            {
                if (nums[i] > nums[j] + nums[pos] && (nums[j] != 0 && nums[0] != 0))
                {
                    ans += (j + 1);
                }
            }
        }
        return ans;
    }
};