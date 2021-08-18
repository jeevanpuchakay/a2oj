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
    ll n, k;
    cin >> n >> k;
    vector<int> acPos(k);
    vector<ll> temperature(n, 2e9);

    for (int i = 0; i < k; i++)
    {
        cin >> acPos[i];
        acPos[i]--;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> temperature[acPos[i]];
    }
    for (int i = 1; i < n; i++)
    {
        temperature[i] = min(temperature[i - 1] + 1, temperature[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        temperature[i] = min(temperature[i], temperature[i + 1] + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << temperature[i] << " ";
    }
    cout << endl;
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