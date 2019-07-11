// #include <bits/stdc++.h>
// using namespace std;

// typedef long double ld;
// typedef long long int ll;
// #define endl "\n"
// vector<vector<ll>> adjlist;
// ll max(ll x, ll y) { return (x > y) ? x : y; }
// ll min(ll x, ll y) { return (x > y) ? y : x; }
// #define mod 1000000007
// #define precision(precision) cout << fixed << setprecision(precision)
// ll cases = 1, n, sum, m;
// ll x, y;
// vector<vector<vector<ll>>> dp(5009, vector<vector<ll>>(5009, vector<ll>(2, -mod)));
// // vector<vector<vector<bool>>> visited(5009, vector<vector<bool>>(5009, vector<bool>(2, false)));
// ll maxPossibleSum(ll start, ll end, int player, vector<ll> &nums, vector<vector<vector<ll>>> &dp)
// {
//     if (dp[start][end][player] != -mod)
//         return dp[start][end][player];
//     if (player == 0)
//     {
//         if (start == end)
//             return dp[start][end][0] = nums[start];
//         else if (start + 1 == end)
//             return dp[start][end][0] = max(nums[start], nums[start + 1]);
//         // else if (dp[start][end][0] != -mod)
//         dp[start][end][0] = max(nums[start] + maxPossibleSum(start + 1, end, 1, nums, dp), nums[end] + maxPossibleSum(start, end - 1, 1, nums, dp));
//         // cout << start << " " << end << " " << 0 << " " << dp[start][end][0] << endl;
//         // dp[start][end][0] = true;
//         return dp[start][end][0];
//     }
//     else
//     {

//         if (start == end)
//             return dp[start][end][1] = 0;
//         // return nums[start];
//         else if (start + 1 == end)
//             return dp[start][end][1] = min(nums[start], nums[start + 1]);
//         // else if (dp[start][end][0] != -mod)
//         dp[start][end][1] = min(maxPossibleSum(start + 1, end, 0, nums, dp), maxPossibleSum(start, end - 1, 0, nums, dp));
//         // cout << start << " " << end << " " << 1 << " " << dp[start][end][1] << endl;
//         // dp[start][end][1] = true;
//         return dp[start][end][1];
//     }
// }
// void solveCase()
// {
//     cin >> n;
//     vector<ll> nums(n);
//     for (ll i = 0; i < n; i++)
//         cin >> nums[i];
//     // cout << "flag" << endl;
//     cout << maxPossibleSum(0, n - 1, 0, nums, dp) << endl;
// }

// int main()
// {

//     // cin >> cases;
//     for (ll t = 1; t <= cases; t++)
//     {
//         solveCase();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
ll maxDiffPossible(ll start, ll end, vector<ll> &nums, vector<vector<ll>> &dp, vector<vector<bool>> &visited)
{
    if (visited[start][end])
    {

        return dp[start][end];
    }

    visited[start][end] = true;
    if (start == end)
        return dp[start][end] = nums[start];
    else if (start == end - 1)
    {
        return dp[start][end] = abs(nums[start] - nums[start + 1]);
    }
    else
    {
        return (dp[start][end] = max(nums[start] - maxDiffPossible(start + 1, end, nums, dp, visited), nums[end] - maxDiffPossible(start, end - 1, nums, dp, visited)));
    }
    // }
    // else
    // {
    //     visited[start][end] = true;
    //     if (start == end)
    //         return dp[start][end] = nums[start];
    //     else if (start == end - 1)
    //     {
    //         return dp[start][end] = abs(nums[start] - nums[start + 1]);
    //     }
    //     else
    //     {
    //         return dp[start][end] = max(-nums[start] + maxDiffPossible(start + 1, end, 1, nums, dp, visited), -nums[end] + maxDiffPossible(start, end - 1, 1, nums, dp, visited));
    //     }
    // }
}
void solveCase()
{
    cin >> n;
    vector<ll> nums(n);
    for (ll &eachNum : nums)
    {
        cin >> eachNum;
        sum += eachNum;
    }
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    maxDiffPossible(0, n - 1, nums, dp, visited);
    cout << (sum + dp[0][n - 1]) / 2 << endl;
}

int main()
{

    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}