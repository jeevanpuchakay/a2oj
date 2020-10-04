#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll ans, cases, n, x, p, k, pos;
void solveCase()
{
    cin >> n >> x >> p >> k;
    ll nums[n];
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums, nums + n);
    ans = -1;
    p--, k--;
    if (nums[p] == x)
        ans = 0;
    else if (k <= p && x >= nums[p])
    {
        pos = lower_bound(nums, nums + n, x) - nums;
        if (nums[pos] == x)
            pos--;
        ans = pos - p + 1;
    }
    else if (k >= p && x <= nums[p])
    {

    }
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}