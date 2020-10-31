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
ll matchIAndJ(int odd, int even, string &s)
{
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] - '0' == odd)
        {
            swap(odd, even);
            ans++;
        }
    }
    if (ans % 2 == 1 && odd != even)
    {
        ans--;
    }
    return ans;
}
void solveCase(ll testCaseNum)
{
    string s;
    cin >> s;
    n = s.size();
    ll ans = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ans = min(ans, n - matchIAndJ(i, j, s));
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
        solveCase(t);
    }
    return 0;
}