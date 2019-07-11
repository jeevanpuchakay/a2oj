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
    cin >> n >> m;
    string s;
    cin >> s;
    ll loses, wins, pos = 0, ans = 0, last = 0;
    vector<ll> streaks;
    streaks.push_back(0);
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == 'L')
            {
                last++;
                streaks.push_back(-last);
                last = 0;
            }
            else
            {
                last++;
                streaks.push_back(last);
                last = 0;
            }
        }
        else
            last++;
    }
    if (s[n - 1] == 'L')
    {
        last++;
        streaks.push_back(-last);
        last = 0;
    }
    else
    {
        last++;
        streaks.push_back(last);
        last = 0;
    }
    streaks.push_back(0);
    for (ll i = 0; i < streaks.size(); i++)
    {
        cout << streaks[i] << " ";
        if (streaks[i] < 0)
        {
            if (abs(streaks[i]) <= m)
            {
                ans = max(ans, 2 * (streaks[i - 1] + abs(streaks[i]) + streaks[i + 1]) - 1);
            }
            else
            {
                ans = max(ans, 2 * (streaks[i - 1] + m) - 1);
                ans = max(ans, 2 * (m + streaks[i + 1]) - 1);
            }
        }
    }
    cout << ans << endl;
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