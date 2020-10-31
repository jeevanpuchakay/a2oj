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
    ll ans = INT_MIN, n, thisItrMax, start = INT_MAX, end = -1e9, mid, k;
    cin >> n;
    vector<ll> numbers(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (numbers[i] != -1)
            continue;
        if (i > 0 && numbers[i - 1] != -1)
        {
            start = min(start, numbers[i - 1]);
            end = max(end, numbers[i - 1]);
        }
        if (i + 1 < n && numbers[i + 1] != -1)
        {
            start = min(start, numbers[i + 1]);
            end = max(end, numbers[i + 1]);
        }
    }
    k = (start + end) / 2;
    for (ll i = 0; i < n; i++)
    {
        if (numbers[i] == -1)
            continue;
        if (i > 0)
        {
            ans = max(ans, abs(numbers[i] - (numbers[i - 1] == -1 ? k : numbers[i - 1])));
        }
        if (i < n - 1)
        {
            ans = max(ans, abs(numbers[i] - (numbers[i + 1] == -1 ? k : numbers[i + 1])));
        }
    }
    if (ans != INT_MIN)
        cout << ans << " " << k << endl;
    else
    {
        cout << 0 << " " << 1 << endl;
    }
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