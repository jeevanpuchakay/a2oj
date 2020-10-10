#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define precision(precision) cout << fixed << setprecision(precision)
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    cin >> n;
    vector<ld> headProb(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> headProb[i];
    }
    vector<vector<ld>> probOfheads(n + 1, vector<ld>(n + 1, 0));
    ld temp = 1;
    for (ll i = 1; i <= n; i++)
    {
        temp *= (1 - headProb[i - 1]);
        probOfheads[i][0] = temp;
    }
    probOfheads[0][0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            probOfheads[i][j] = probOfheads[i - 1][j] * (1 - headProb[i - 1]) + probOfheads[i - 1][j - 1] * headProb[i - 1];
        }
    }
    temp = 0;
    for (ll i = (n + 1) / 2; i <= n; i++)
    {
        temp += probOfheads[n][i];
    }
    precision(9) << temp << endl;
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