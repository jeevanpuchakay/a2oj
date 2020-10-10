#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
ll explorePossibilities(vector<vector<ll>> &noOfWaysToFill, vector<ll> &nums, ll pos, ll last)
{
    if (pos >= n)
    {
        // cout << last << " ";
        return 1;
    }
    if (nums[pos] != 0 && abs(last - nums[pos]) > 1 && pos != 0)
        return 0;
    if (nums[pos] != 0)
    {
        return explorePossibilities(noOfWaysToFill, nums, pos + 1, nums[pos]);
    }
    ll &ans = noOfWaysToFill[last][pos];
    if (ans != -1)
        return ans;
    ans = 0;
    for (ll posibility = max(last - 1, 1); ((posibility <= m && last == 0) || (last != 0 && abs(posibility - last) <= 1 && posibility <= m)); posibility++)
    {
        ans += explorePossibilities(noOfWaysToFill, nums, pos + 1, posibility);
        ans %= mod;
    }
    return ans;
}
void solveCase()
{
    cin >> n >> m;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    vector<vector<ll>> noOfWaysToFill(m + 1, vector<ll>(n + 1, -1));
    cout << explorePossibilities(noOfWaysToFill, nums, 0, 0);
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