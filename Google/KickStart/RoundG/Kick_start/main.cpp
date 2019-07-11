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
    string s;
    cin >> s;
    size_t kickFound, startFound;
    ll ans = 0, pos = 0, n = s.size();
    vector<ll> kickPos, startPos;
    // cout << "Kick: ";
    while (pos < n)
    {
        kickFound = s.find("KICK", pos);
        if (kickFound != string::npos)
        {
            // cout << kickFound << " ";
            kickPos.push_back((ll)kickFound);
            pos = kickFound + 1;
        }
        else
            break;
    }
    
    pos = 0;
    // cout << endl
    //  << "start: ";
    while (pos < n)
    {
        startFound = s.find("START", pos);
        if (startFound != string::npos)
        {
            // cout << startFound << " ";
            startPos.push_back((ll)startFound);
            pos = startFound + 1;
        }
        else
            break;
    }
    ll kickFoundSz = kickPos.size(), startFoundSz = startPos.size();
    startFound = kickFound = 0;
    // cout << kickFoundSz << " " << startFoundSz << endl;
    for (; kickFound < kickFoundSz; kickFound++)
    {
        ans += startFoundSz - (lower_bound(startPos.begin(), startPos.end(), kickPos[kickFound]) - startPos.begin());
    }
    printTestCaseNum(testCaseNum) << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}