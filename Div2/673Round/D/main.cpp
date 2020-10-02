#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, sum, remain, avg;
void solveCase()
{
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> ans;
    ll nums[n + 1];
    sum = 0;
    for (ll i = 01; i <= n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }
    if (sum % n != 0)
    {
        cout << -1 << '\n';
        return;
    }
    avg = sum / n;
    for (ll i = 2; i <= n; i++)
    {
        remain = nums[i] % i;
        if (remain > 0)
        {
            ans.push_back({1, {i, i - remain}});
            nums[i] += (i - remain);
        }
        ans.push_back({i, {1, nums[i] / i}});
        nums[1] += nums[i];
        nums[i] = 0;
    }
    for (ll i = 2; i <= n; i++)
    {
        ans.push_back({1, {i, avg}});
    }
    cout << ans.size() << '\n';
    for (pair<ll, pair<ll, ll>> &each : ans)
    {
        cout << each.first << " " << each.second.first << " " << each.second.second << '\n';
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