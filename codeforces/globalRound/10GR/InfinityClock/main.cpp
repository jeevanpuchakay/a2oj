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
void solveCase()
{
    cin >> n >> m;

    ll maxValue2 = -mod, maxValue = -mod;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxValue = max(maxValue, nums[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        // cin >> nums[i];
        nums[i] = maxValue - nums[i];
        maxValue2 = max(maxValue2, nums[i]);
    }
    if (m % 2 == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            // cin >> nums[i];
            cout << (maxValue2 - nums[i]) << " ";
            // maxValue = max(maxValue, nums[i]);
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
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