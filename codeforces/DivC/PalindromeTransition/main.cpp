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
    ll currPos, ans = 0, start = -1, end = -1;
    string s;
    cin >> n >> currPos >> s;
    currPos--;
    for (ll i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            start = i;
            break;
        }
    }
    for (ll i = n / 2 - 1; i >= 0; i--)
    {
        if (s[i] != s[n - 1 - i])
        {
            end = i;
            break;
        }
    }
    if (start == -1)
    {
        cout << 0 << endl;
        return;
    }
    for (ll i = start; i <= end; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            ans += (min(abs(s[i] - s[n - 1 - i]), 26 - abs(s[i] - s[n - 1 - i])));
        }
    }
    if (currPos < n / 2)
    {
        if (currPos <= start)
        {
            ans += (end - currPos);
        }
        else if (currPos <= end)
        {
            ans += min(2 * end - currPos - start, end + currPos - 2 * start);
        }
        else
        {
            ans += (currPos - start);
        }
    }
    else
    {
        x = start, y = end;
        start = n - 1 - y, end = n - 1 - x;
        if (currPos <= start)
        {
            ans += (end - currPos);
        }
        else if (currPos <= end)
        {
            ans += min(2 * end - currPos - start, end + currPos - 2 * start);
        }
        else
        {
            ans += (currPos - start);
        }
    }
    cout << ans << endl;
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