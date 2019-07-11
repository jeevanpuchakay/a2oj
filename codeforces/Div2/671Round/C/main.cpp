#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, x, ans;
void solveCase()
{
    bool present = false, all = true;
    cin >> n >> x;
    ans = 0;
    int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += (x - a[i]);
        if (a[i] == x)
            present = true;
        all &= (a[i] == x);
    }
    if (all)
    {
        cout << 0 << '\n';
    }
    else if (present || ans == 0)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
    }
    return;
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