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
    ll a = -1, b, c, temp;
    bool ans = false;
    cin >> n;
    if (n % 15 == 0)
    {
        a = b = c = n / 15;
        ans = true;
    }
    else if (n % 3 == 0)
    {
        a = n / 3;
        b = c = 0;
        ans = true;
    }
    else if (n % 5 == 0)
    {
        b = n / 5, a = c = 0;
        ans = true;
    }
    else if (n % 7 == 0)
    {
        c = n / 7, a = b = 0;
        ans = true;
    }
    else
    {
        for (ll i = 0; n - 7 * i >= 0 && (ans == false); i++)
        {
            for (ll j = 0; n - 7 * i - 5 * j >= 0 && (ans == false); j++)
            {
                if ((n - 7 * i - 5 * j) % 3 == 0)
                {
                    a = (n - 7 * i - 5 * j) / 3, b = j;
                    c = i;
                    ans = true;
                }
            }
        }
    }
    if (ans)
    {
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << -1 << endl;
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