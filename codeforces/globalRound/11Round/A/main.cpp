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
    vector<ll> a(n);
    sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum == 0)
    {
        cout << "NO" << endl;
    }
    else if (sum > 0)
    {
        sort(a.rbegin(), a.rend());
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else
    {
        sort(a.begin(), a.end());
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
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