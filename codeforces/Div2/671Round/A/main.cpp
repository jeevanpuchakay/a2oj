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
    string s;
    cin >> s;
    ll o1 = 0, o2 = 0, e1 = 0, e2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                e1++;
            }
            else
            {
                o1++;
            }
        }
        else
        {
            if ((s[i] - '0') % 2 == 0)
            {
                e2++;
            }
            else
            {
                o2++;
            }
        }
    }
    if (n % 2 == 0)
    {
        if (e2 > 0)
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
    else
    {
        if (o1 > 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
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