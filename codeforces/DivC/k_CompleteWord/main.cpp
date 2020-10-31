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
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
void solveCase(ll testCaseNum)
{
    cin >> n >> m;
    string s;
    char freq = '#';
    ll ans = 0, count = 0, pos, total, prevPos;
    bool plus = true;
    cin >> s;
    for (ll i = 0; i < m / 2; i++)
    {
        plus = false;
        pos = i, count = 0, total = 0, prevPos;
        vector<ll> charFreq(26, 0);
        while (pos < n)
        {
            charFreq[s[pos] - 'a']++;
            prevPos = pos;
            if (count <= charFreq[s[pos] - 'a'])
            {
                freq = s[pos];
                count = charFreq[s[pos] - 'a'];
            }
            if (plus)
            {
                pos += 2 * i + 1;
            }
            else
            {
                pos += m - 2 * i - 1;
            }
            plus ^= true;
            total++;
        }
        // cout << total << " " << count << endl;
        ans += total - count;
    }
    if (m % 2 == 1)
    {
        pos = m / 2, count = 0, total = 0, prevPos;
        vector<ll> charFreq(26, 0);
        while (pos < n)
        {
            charFreq[s[pos] - 'a']++;
            prevPos = pos;
            if (count <= charFreq[s[pos] - 'a'])
            {
                freq = s[pos];
                count = charFreq[s[pos] - 'a'];
            }
            pos += m;
            total++;
        }
        ans += total - count;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}