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
    vector<bool> isPlus(2 * n, false);
    vector<ll> Shurikens(2 * n), ans(n);
    char sign;
    ll thresholdVal, pos = n - 1, thresholdSkipCount = -1;
    bool isPossible = true;
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> sign;
        if (sign == '+')
        {
            isPlus[i] = true;
        }
        else
        {
            cin >> Shurikens[i];
        }
    }
    auto comp = [](ll a, ll b) {
        return a > b;
    };
    priority_queue<ll, vector<ll>, decltype(comp)> pQueue(comp);
    thresholdVal = mod;
    for (ll i = 2 * n - 1; i >= 0; i--)
    {
        if (pQueue.empty() && isPlus[i])
        {
            isPossible = false;
            break;
        }
        else if (isPlus[i])
        {
            ans[pos--] = pQueue.top();
            pQueue.pop();
            thresholdSkipCount++;
        }
        else if (pQueue.empty())
        {
            pQueue.push(Shurikens[i]);
        }
        else if (Shurikens[i] < pQueue.top())
        {
            pQueue.push(Shurikens[i]);
        }
        else
        {
            isPossible = false;
            break;
        }
    }
    if (isPossible)
    {
        cout << "YES" << endl;
        for (ll &eachNum : ans)
        {
            cout << eachNum << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}