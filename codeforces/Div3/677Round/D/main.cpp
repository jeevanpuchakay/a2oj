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
    vector<ll> gangNum(n + 1);
    vector<pair<ll, ll>> ans;
    queue<ll> toBeProcessed, processed;
    bool possible = true;
    ll parent, count = n - 1, child, cCount;
    for (ll i = 1; i <= n; i++)
    {
        cin >> gangNum[i];
        toBeProcessed.push(i);
    }
    toBeProcessed.pop();
    processed.push(1);
    while (toBeProcessed.empty() == false && possible)
    {
        possible = false;
        parent = processed.front();
        processed.pop();
        cCount = count;
        for (ll i = 0; i < cCount; i++)
        {
            child = toBeProcessed.front();
            toBeProcessed.pop();
            if (gangNum[child] != gangNum[parent])
            {
                possible = true;
                processed.push(child);
                ans.push_back({child, parent});
                count--;
            }
            else
            {
                toBeProcessed.push(child);
            }
        }
    }
    if (toBeProcessed.empty() == true)
    {
        cout << "YES" << endl;
        for (pair<ll, ll> &eachEdge : ans)
        {
            cout << eachEdge.first << " " << eachEdge.second << endl;
        }
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
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}