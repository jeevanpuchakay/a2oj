#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlistGiven;
vector<vector<ll>> reachableNodes;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
pair<ll, ll> travesreTheGraph(ll pos, vector<ll> &outDegree, vector<ll> &noOfCitizens, vector<ll> &sumInSubTree, vector<ll> &maxCitizensInSubtree)
{
    if (outDegree[pos] == 0)
    {
        sumInSubTree[pos] = noOfCitizens[pos];
        maxCitizensInSubtree[pos] = noOfCitizens[pos];
        reachableNodes[pos].push_back(pos);
        return {noOfCitizens[pos], noOfCitizens[pos]};
        //{Sum,MaxValue};
    }
    ll maxCount = 0, noOfReachableNodes = 0, totalSumInAllSubTrees = 0, maxCountWhenEvenlyDistributed;
    for (ll &eachNeighbour : adjlistGiven[pos])
    {
        totalSumInAllSubTrees += travesreTheGraph(eachNeighbour, outDegree, noOfCitizens, sumInSubTree, maxCitizensInSubtree).first;
        for (ll &eachNodeReachable : reachableNodes[eachNeighbour])
        {
            // maxCount = max(maxCount, movedCitizensCount[eachNodeReachable]);
            reachableNodes[pos].push_back(eachNodeReachable);
        }
    }
    noOfReachableNodes = (ll)reachableNodes[pos].size(), maxCountWhenEvenlyDistributed = ceil((totalSumInAllSubTrees + noOfCitizens[pos]) / float(noOfReachableNodes)), maxCount = maxCountWhenEvenlyDistributed;
    for (ll &eacNodeReachable : reachableNodes[pos])
    {
        maxCount = max(maxCount, maxCitizensInSubtree[eacNodeReachable]);
        // cout << eacNodeReachable << " " << maxCitizensInSubtree[eacNodeReachable] << en      dl;
    }

    return {totalSumInAllSubTrees + noOfCitizens[pos], maxCount};
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    adjlistGiven = reachableNodes = vector<vector<ll>>(n + 10);
    vector<ll> outDegree(n + 10, 0), noOfCitizens(n + 10, 0), sumInSubTree(n + 10, 0), maxCitizensInSubtree(n + 10, 0);
    for (ll i = 2; i <= n; i++)
    {
        cin >> x;
        adjlistGiven[x].push_back(i);
        outDegree[x]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> noOfCitizens[i + 1];
    }
    cout << travesreTheGraph(1, outDegree, noOfCitizens, sumInSubTree, maxCitizensInSubtree).second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    // freopen("TestCaseOutput.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}