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
    ll total_ones = 0, total_zeros = 0, ans = mod, left_ones = 0, left_zeros = 0, type_1 = 0, type_2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            total_ones++;
        else
            total_zeros++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            left_ones++;
        else
            left_zeros++;
        type_1 = left_zeros + (total_ones - left_ones);
        type_2 = left_ones + (total_zeros - left_zeros);
        ans = min(ans, type_1);
        ans = min(ans, type_2);
    }

    cout << ans << endl;
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