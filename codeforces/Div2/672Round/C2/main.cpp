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
vector<ll> strengths;
void removeFromAns(ll &ans, ll pos)
{
    if (pos <= 0 || pos >= n + 1)
        return;
    if (strengths[pos - 1] < strengths[pos] && strengths[pos] > strengths[pos + 1])
    {
        ans -= strengths[pos];
    }
    else if (strengths[pos - 1] > strengths[pos] && strengths[pos] < strengths[pos + 1])
    {
        ans += strengths[pos];
    }
    return;
}
void includeInSequence(ll turnPos, ll &ans)
{
    if (turnPos <= 0 || turnPos >= n + 1)
        return;
    if (strengths[turnPos - 1] < strengths[turnPos] && strengths[turnPos] > strengths[turnPos + 1])
    {
        ans += strengths[turnPos];
    }
    else if (strengths[turnPos - 1] > strengths[turnPos] && strengths[turnPos] < strengths[turnPos + 1])
    {
        ans -= strengths[turnPos];
    }
}
ll reEvaluateAns(ll &ans, ll pos1, ll pos2)
{
    vector<ll> taken = {0, n + 1};
    ll turnPos = pos1 - 1;
    while (turnPos <= pos1 + 1)
    {
        if (find(taken.begin(), taken.end(), turnPos) == taken.end())
        {
            includeInSequence(turnPos, ans);
            taken.push_back(turnPos);
        }
        turnPos++;
    }
    turnPos = pos2 - 1;
    while (turnPos <= pos2 + 1)
    {
        if (find(taken.begin(), taken.end(), turnPos) == taken.end())
        {
            includeInSequence(turnPos, ans);
            taken.push_back(turnPos);
        }
        turnPos++;
    }
    return ans;
}
void solveCase(ll testCase)
{
    ll cEvenLen, cOddLen, q, oddLen = -mod, evenLen = 0, ans = 0;
    cin >> n >> q;
    strengths.push_back(-mod);
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        cOddLen = oddLen;
        cEvenLen = evenLen;
        oddLen = max(oddLen, cEvenLen + x);
        evenLen = max(cEvenLen, cOddLen - x);
        strengths.push_back(x);
    }
    strengths.push_back(-mod);
    ans = oddLen;
    // cout << testCase << " Test " << ans << endl;
    cout << ans << endl;
    while (q-- > 0)
    {
        cin >> x >> y;
        // x--,y--;
        removeFromAns(ans, x);
        removeFromAns(ans, x - 1);
        removeFromAns(ans, x + 1);
        vector<ll> taken = {x - 1, x, x + 1};
        if (find(taken.begin(), taken.end(), y) == taken.end())
        {
            removeFromAns(ans, y);
        }
        if (find(taken.begin(), taken.end(), y + 1) == taken.end())
        {
            removeFromAns(ans, y + 1);
        }
        if (find(taken.begin(), taken.end(), y - 1) == taken.end())
        {
            removeFromAns(ans, y - 1);
        }
        // cout << ans << " ans" << endl;
        swap(strengths[x], strengths[y]);
        cout << reEvaluateAns(ans, x, y) << endl;
    }
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}