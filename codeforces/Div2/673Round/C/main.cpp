#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    cin >> n;
    ll nums[n];
    vector<ll> lastOccurence(n + 10, -1), ans(n + 5, mod), maxGap(n + 10, -1);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (ll i = 0; i < n; i++)
    {
        maxGap[nums[i]] = max(maxGap[nums[i]], i - lastOccurence[nums[i]]);
        lastOccurence[nums[i]] = i;
    }

    for (ll i = 1; i <= n; i++)
    {
        maxGap[i] = max(maxGap[i], n - lastOccurence[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        ans[maxGap[i]] = min(i, ans[maxGap[i]]);
        for (ll j = maxGap[i] + 1; j <= n && ans[j] == mod; j++)
        {
            ans[j] = min(ans[j], i);
        }
    }
    for (ll i = 0; i < n; i++)
        cout << (ans[i + 1] == mod ? -1 : ans[i + 1]) << " ";
    cout << '\n';
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