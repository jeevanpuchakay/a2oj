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
void recurseSol(ll platePos, vector<ll> &plates, ll leftWeight, ll rightWeight, unordered_set<ll> &possibleWeights)
{
    if (platePos == m)
    {
        if (leftWeight == rightWeight)
        {
            possibleWeights.insert(leftWeight * 2);
        }
        return;
    }
    recurseSol(platePos + 1, plates, leftWeight, rightWeight, possibleWeights);
    recurseSol(platePos + 1, plates, leftWeight + plates[platePos], rightWeight, possibleWeights);
    recurseSol(platePos + 1, plates, leftWeight, rightWeight + plates[platePos], possibleWeights);
    return;
}

void solveCase()
{
    cin >> n >> m;
    vector<ll> barbells(n), plates(m);
    for (ll i = 0; i < n; i++)
        cin >> barbells[i];
    for (ll i = 0; i < m; i++)
        cin >> plates[i];
    unordered_set<ll> possibleWeights;
    recurseSol(0, plates, 0, 0, possibleWeights);
    set<ll> answers;
    for (ll eachBarbell : barbells)
    {
        for (ll eachPossibleW : possibleWeights)
        {
            answers.insert(eachBarbell + eachPossibleW);
        }
    }
    for (ll eachPossibleW : answers)
        cout << eachPossibleW << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}