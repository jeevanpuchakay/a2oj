#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
ll min(ll x, ll y, ll z)
{
    return min(x, min(y, z));
}
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> statusOfDay(n + 1);
    vector<vector<ll>> minNoOfWaysOfResting(n + 1, vector<ll>(3, 0));
    for (ll i = 1; i <= n; i++)
        cin >> statusOfDay[i];
    // 0 - resting
    // 1 - contest
    // 2 - gym
    for (ll i = 1; i <= n; i++)
    {
        if (statusOfDay[i] == 3)
        {
            minNoOfWaysOfResting[i][0] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][1] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][2]);
            minNoOfWaysOfResting[i][2] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1]);
        }
        else if (statusOfDay[i] == 2)
        {
            minNoOfWaysOfResting[i][0] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][1] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][2] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1]);
        }
        else if (statusOfDay[i] == 1)
        {
            minNoOfWaysOfResting[i][0] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][1] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][2]);
            minNoOfWaysOfResting[i][2] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1]) + 1;
        }
        else
        {
            minNoOfWaysOfResting[i][0] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][1] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][2]) + 1;
            minNoOfWaysOfResting[i][2] = min(minNoOfWaysOfResting[i - 1][0], minNoOfWaysOfResting[i - 1][1]) + 1;
        }
    }
    cout << min(minNoOfWaysOfResting[n][0], minNoOfWaysOfResting[n][1], minNoOfWaysOfResting[n][2]) << endl;
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