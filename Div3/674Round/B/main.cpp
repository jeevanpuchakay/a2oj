#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, m, a, b, c, d;
bool ans;
void solveCase()
{
    cin >> n >> m;
    ans = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        ans |= (c == b);
    }
    if (ans && (m % 2 == 0))
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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