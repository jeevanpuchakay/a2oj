#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    cin >> n;
    ll start = 0, end = n - 1;
    ll prices[n];
    for (ll i = 0; i < n; i++)
        cin >> prices[i];
    sort(prices, prices + n);
    cout << (n - 1) / 2 << '\n';
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << prices[end--] << " ";
        }
        else
        {
            cout << prices[start++] << " ";
        }
    }
    cout << '\n';
}

int main()
{

    cases = 1;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}

