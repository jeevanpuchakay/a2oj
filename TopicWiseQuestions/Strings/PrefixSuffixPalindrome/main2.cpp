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
ll get
void solveCase()
{
    string s, ans = "", pref = "", suff = "", mid = "", cMid;
    cin >> s;
    n = s.size();
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    ll start = 0, end = n - 1, len1, len2;
    while (start < end && s[start] == s[end])
    {
        pref += s[start];
        start++, end--;
    }
    if (start <= end)
    {
        cMid = mid = s.substr(start, end - start + 1);
        len1=
    }
    else
    {
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