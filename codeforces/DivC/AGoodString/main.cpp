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
ll getMinNoMovesReq(ll start, ll end, char currChar, string &s, vector<vector<ll>> &dp)
{
    if (start == end)
        return (s[start] == currChar ? 0 : 1);
    ll &ans = dp[start][currChar - 'a'], noOfMovesInLeftHalf = 0, noOfMovesInRightHalf = 0, mid;
    if (ans != -1)
        return ans;
    mid = start + (end - start) / 2;
    for (ll i = start; i <= mid; i++)
    {
        if (s[i] != currChar)
            noOfMovesInLeftHalf++;
    }
    for (ll i = mid + 1; i <= end; i++)
    {

        if (s[i] != currChar)
            noOfMovesInRightHalf++;
    }
    ans = min(noOfMovesInLeftHalf + getMinNoMovesReq(mid + 1, end, currChar + 1, s, dp), noOfMovesInRightHalf + getMinNoMovesReq(start, mid, currChar + 1, s, dp));
    return ans;
}
void solveCase(ll testCaseNum)
{
    string s;
    cin >> n >> s;
    vector<vector<ll>> dp(n + 1, vector<ll>(27, -1));
    cout << getMinNoMovesReq(0, n - 1, 'a', s, dp) << endl;
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