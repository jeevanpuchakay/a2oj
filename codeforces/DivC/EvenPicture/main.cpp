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
void fillTheMidGrid(ll count, vector<pair<ll, ll>> &coOrdinates)
{
    coOrdinates.push_back({0, n + 1});
    coOrdinates.push_back({1, n + 1});
    for (ll i = n; i > 0; i--)
    {
        coOrdinates.push_back({n-i, i});
        coOrdinates.push_back({n-i+1, i});
        coOrdinates.push_back({n-i+2, i});
        // coOrdinates.push_back({3, i});
    }

    coOrdinates.push_back({n,0});
    coOrdinates.push_back({n+1,0});
    return;
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<pair<ll, ll>> coOrdinates;
    fillTheMidGrid(n, coOrdinates);
    cout << (ll)coOrdinates.size() << endl;
    for (pair<ll, ll> &eachNode : coOrdinates)
    {
        cout << eachNode.first << " " << eachNode.second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}