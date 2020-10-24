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
    string s, ans;
    cin >> s >> x;
    n = s.size();
    ans = string(n, '2');
    bool possible = true;
    for (ll i = 0; i < n && possible; i++)
    {
        if (s[i] == '0')
        {
            if ((i - x) >= 0)
            {
                if (ans[i - x] == '2')
                {
                    ans[i - x] = '0';
                }
                else if (ans[i - x] == '1')
                {
                    possible = false;
                }
            }
            if ((i + x) < n)
            {
                if (ans[i + x] == '2')
                {
                    ans[i + x] = '0';
                }
                else if (ans[i + x] == '1')
                {
                    possible = false;
                }
            }
        }
        else
        {

            if ((i - x >= 0) && (i + x < n))
            {
                if (ans[i - x] == '2' || ans[i - x] == '1')
                {
                    ans[i - x] = '1';
                }
                else if (ans[i + x] == '2' || ans[i + x] == '1')
                {
                    ans[i + x] = '1';
                }
                else
                {
                    possible = false;
                }
            }
            else if (i - x >= 0)
            {
                if (ans[i - x] == '2' || ans[i - x] == '1')
                {
                    ans[i - x] = '1';
                }
                else
                {
                    possible = false;
                }
            }
            else
            {
                if (ans[i + x] == '2' || ans[i + x] == '1')
                {
                    ans[i + x] = '1';
                }
                else
                {
                    possible = false;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (ans[i] == '2')
            ans[i] = '1';
    }
    if (possible)
    {
        cout << ans << endl;
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