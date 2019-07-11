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
    n = s.size();
    bool zero_zero = true, one_one = true, zero_one = true, first_one_one = false;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '0' && s[i] == '0')
            zero_zero = false;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '0' && s[i] == '0')
            one_one = false;
    }
    for (int i = 1; i < n; i++)
    {
        if (first_one_one && s[i - 1] == '0' && s[i] == '0')
            zero_one = false;
        else if (s[i - 1] == '1' && s[i] == '1')
            first_one_one = true;
    }
    if (zero_zero || one_one || zero_one)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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