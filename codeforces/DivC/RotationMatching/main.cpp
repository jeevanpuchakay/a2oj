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
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> sequence1(n), sequence2(n), no_of_matches(n + 1, 0), pos_of_ele(n + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> sequence1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> sequence2[i];
        pos_of_ele[sequence2[i]] = i;
    }
    ll ans = 0, reqRotation = 0;
    for (ll i = 0; i < n; i++)
    {
        reqRotation = pos_of_ele[sequence1[i]] - i;
        if (reqRotation < 0)
            reqRotation += n;
        no_of_matches[reqRotation]++;
    }
    for (ll i = 0; i < n; i++)
        ans = max(ans, no_of_matches[i]);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}