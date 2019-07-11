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
    cin >> n;
    vector<string> transform(10);
    transform[1] = "1", transform[2] = "2", transform[3] = "3", transform[4] = "322", transform[5] = "5", transform[6] = "53", transform[7] = "7", transform[8] = "7222", transform[9] = "7332";
    string s, ans = "";
    cin >> s;
    for (char c : s)
    {
        if (c != '1' && c != '0')
        {
            ans += transform[c - '0'];
        }
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}