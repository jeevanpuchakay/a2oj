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
    cin >> n;
    vector<ll> primeFcount(n + 1, 1);
    ll ans = 0;
    for (ll i = 2; i < n; i++)
    {
        if (primeFcount[i] != 1)
        {
            // cout<<i<<" ";
            continue;
        }
        // continue;
        for (ll j = i; j < n; j += i)
        {
            sum = 0, m = j;
            while (m % i == 0)
            {
                sum++;
                m /= i;
            }
            primeFcount[j] *= (1 + sum);
        }
    }
    for (ll i = 1; i < n; i++)
    {
        // cout << i << " " << primeFcount[i] << endl;
        ans += (primeFcount[i] == 1 ? 2 : primeFcount[i]);
    }
    cout << ans - 1 << endl;
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