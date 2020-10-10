#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, sum, curr, idx, ans, cumSum;
void solveCase()
{
    cin >> n;
    unordered_map<ll, ll> sum;
    ans = 0;
    idx = 1;
    sum[0]=1;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        cumSum += curr;
        if (sum[cumSum] >= idx)
        {
            ans++;
            cumSum = curr;
            idx = i + 1;
            // sum.clear();
            sum[0]=i+1;
            sum[cumSum] = i + 1;
        }
        else
        {
            sum[cumSum] = i + 1;
        }
    }
    cout << ans << '\n';
}

int main()
{

    // cin >> cases;
    cases = 1;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}