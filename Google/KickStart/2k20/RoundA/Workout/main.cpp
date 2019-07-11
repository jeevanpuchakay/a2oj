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

    ll k, totalNoOfInsertions, minDiff = 0, maxDiff = 0, currDiff, ans;
    cin >> n >> k;
    vector<ll> workoutMinutes(n), diffMinutes(n - 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> workoutMinutes[i];
    }
    for (ll i = 1; i < n; i++)
    {
        diffMinutes[i - 1] = (workoutMinutes[i] - workoutMinutes[i - 1]);
        maxDiff = max(maxDiff, diffMinutes[i - 1]);
    }
    ans = maxDiff;
    while (minDiff <= maxDiff)
    {
        currDiff = minDiff + (maxDiff - minDiff) / 2;
        if (currDiff == 0)
            break;
        totalNoOfInsertions = 0;
        for (ll eachDiff : diffMinutes)
        {
            totalNoOfInsertions += (ceil(eachDiff / double(currDiff)) - 1);
        }
        if (totalNoOfInsertions <= k)
        {
            ans = currDiff;
            maxDiff = currDiff - 1;
        }
        else
        {
            minDiff = currDiff + 1;
        }
    }
    printTestCaseNum(testCaseNum) << ans << endl;
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