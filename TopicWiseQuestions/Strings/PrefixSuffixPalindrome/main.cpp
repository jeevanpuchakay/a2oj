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
    string s, ans = "", pref = "", suff = "", mid = "";
    cin >> s;
    n = s.size();
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    ll start = 0, end = n - 1, cStart, cEnd, pos1, pos2, midPos1, midPos2;
    while (start < end && s[start] == s[end])
    {
        pref += s[start];
        start++, end--;
    }
    cStart = start, cEnd = end, midPos1 = midPos2 = -1;
    bool possible = false;
    while (possible == false && cStart <= cEnd)
    {
        /* code */
        possible = true;
        for (pos1 = cStart, pos2 = cEnd; pos1 <= pos2; pos1++, pos2--)
        {
            if (s[pos1] != s[pos2])
            {
                possible = false;
            }
        }
        if (possible)
        {
            midPos1 = cStart, midPos2 = cEnd;
        }
        else
        {
            cEnd--;
        }
    }
    possible = false;
    cStart = start, cEnd = end;
    while (possible == false && cStart <= cEnd)
    {
        /* code */
        possible = true;
        for (pos1 = cStart, pos2 = cEnd; pos1 <= pos2; pos1++, pos2--)
        {
            if (s[pos1] != s[pos2])
            {
                possible = false;
            }
        }
        if (possible && (midPos2 - midPos1 + 1 <= cEnd - cStart + 1))
        {
            midPos1 = cStart, midPos2 = cEnd;
        }
        // else if(possible)break;
        else
        {
            cStart++;
        }
    }
    ans += pref;
    reverse(pref.begin(), pref.end());
    if (midPos1 != -1)
        ans += s.substr(midPos1, midPos2 - midPos1 + 1);
    ans += pref;
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