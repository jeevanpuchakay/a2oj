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
    cin >> x >> y;
    ll ans = 0, cX = x, cY = y;
    bool a, b;
    for (int i = 0; i <= 29; i++)
    {
        a = (x & 1 == 1);
        b = (y & 1 == 1);
        if (a && b)
        {
            ans |= (1 << i);
        }
        x >>= 1;
        y >>= 1;
    }
    cout << (ans ^ cX) + (ans ^ cY) << endl;
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