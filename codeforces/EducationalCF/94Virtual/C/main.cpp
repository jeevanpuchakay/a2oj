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
    string s, ans, reCreate = "";
    cin >> s >> x;
    n = s.size();
    ans = string(n, '2');
    bool possible = true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if ((i + x) < n)
            {
                if (ans[i + x] == '2' || ans[i + x] == '0')
                    ans[i + x] = '0';
                else
                {
                    possible = false;
                    break;
                }
            }
            if ((i - x) >= 0)
            {
                if (ans[i - x] == '2' || ans[i - x] == '0')
                    ans[i - x] = '0';
                else
                {
                    possible = false;
                    break;
                }
            }
        }
    }
    if (possible)
        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == '2')
            {
                ans[i] = '1';
            }
        }
    if (possible)
    {
        for (ll i = 0; i < n; i++)
        {
            if ((i - x >= 0) && ans[i - x] == '1')
            {
                reCreate += '1';
            }
            else if ((i + x < n) && (ans[i + x] == '1'))
            {
                reCreate += '1';
            }
            else
            {
                reCreate += '0';
            }
        }
        if (reCreate != s)
            possible = false;
    }
    if (possible)
        cout << ans << endl;
    else
        cout << -1 << endl;
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