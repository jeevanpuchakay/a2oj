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
    cin >> n >> x >> m;

    unordered_map<ll, ll> lastOcc;
    vector<ll> prefSum;
    prefSum.push_back(0);
    ll currNum = x, pos = 1, remain, repeations;
    while (lastOcc[currNum] == 0 && pos <= n)
    {
        lastOcc[currNum] = pos;
        pos++;
        prefSum.push_back(prefSum.back() + currNum);
        currNum = ((currNum % m) * (currNum % m)) % m;
    }
    if (n <= pos)
    {
        cout << prefSum.back() << endl;
        return;
    }
    remain = (n - lastOcc[currNum] + 1) % (pos - lastOcc[currNum]);
    repeations = (n - remain - lastOcc[currNum] + 1) / (pos - lastOcc[currNum]);
    // cout << pos << " " << remain << " " << repeations << endl;
    ll ans = prefSum[lastOcc[currNum] - 1] + repeations * (prefSum[pos - 1] - prefSum[lastOcc[currNum] - 1]) + prefSum[remain + lastOcc[currNum] - 1] - prefSum[lastOcc[currNum] - 1];
    cout << ans << endl;
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