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
ll cases = 1, n, sum, k, m;
ll x, y;
void solveCase()
{
    cin >> n >> m >> k;
    ll tubeLen = (n * m) / k;
    x = 1, y = 1;
    bool increment = true;
    for (ll j = 0; j < k - 1; j++)
    {
        cout << tubeLen << " ";
        for (ll i = 1; i <= tubeLen; i++)
        {
            if (increment)
            {
                if (y == m)
                {
                    cout << x << " " << y << " ";
                    increment = false;
                    x++;
                }
                else
                {
                    cout << x << " " << y << " ";
                    y++;
                }
            }
            else
            {
                cout << x << " " << y << " ";
                if (y == 1)
                {
                    x++;
                    increment = true;
                }
                else
                {
                    y--;
                }
            }
        }
        cout << endl;
    }
    cout << (n * m - (tubeLen * (k - 1))) << " ";
    while (x <= n)
    {
        if (increment)
        {
            if (y == m)
            {
                cout << x << " " << y << " ";
                increment = false;
                x++;
            }
            else
            {
                cout << x << " " << y << " ";
                y++;
            }
        }
        else
        {
            cout << x << " " << y << " ";
            if (y == 1)
            {
                x++;
                increment = true;
            }
            else
            {
                y--;
            }
        }
    }
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