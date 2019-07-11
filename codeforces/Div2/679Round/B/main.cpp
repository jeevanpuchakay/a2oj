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
    cin >> n >> m;
    adjlist = vector<vector<ll>>(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> adjlist[i][j];
        }
    }
    for (ll j = 0; j < n; j++)
    {
        cin >> x;
        for (ll i = 0; i < n; i++)
        {
            if (find(adjlist[i].begin(), adjlist[i].end(), x) != adjlist[i].end())
            {
                for (ll col = 0; col < m; col++)
                    cout << adjlist[i][col] << " ";
                cout << endl;
                break;
            }
        }
    }

    for (ll i = 1; i < m; i++)
        for (ll j = 0; j < n; j++)
        {
            cin >> x;
        }
    return;
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