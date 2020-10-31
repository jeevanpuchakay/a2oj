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
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;

void solve()
{
    cin >> n;
    vector<ll> numbers(n + 1, 0), freq(n + 1, 0);
    // unordered_map<ll, ll> indexOfCumSum;
    ll ans = 0, targetSum, rightIndex;
    bool possible;
    for (ll i = 1; i <= n; i++)
    {
        cin >> numbers[i];
        freq[numbers[i]]++;
    }

    for (ll i = 1; i <= n; i++)
    {
        targetSum = numbers[i];
        for (ll j = i + 1; j <= n && targetSum <= n; j++)
        {
            targetSum += numbers[j];
            if (targetSum <= n && freq[targetSum] > 0)
            {
                ans += freq[targetSum];
                freq[targetSum] = 0;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solve();
    }
    return 0;
}