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
class DSU
{
public:
    int lenOfSet;
    vector<int> rank;
    DSU(int n)
    {
        this->lenOfSet = n;
        rank = vector<int>(n + 1);
        for (int i = 0; i <= n; i++)
            rank[i] = i;
    }
    int findParent(int node)
    {
        if (node == this->rank[node])
            return node;
        return this->rank[node] = this->findParent(this->rank[node]);
    }
    void mergeNodes(int node1, int node2)
    {
        int parentOfNode1 = this->findParent(node1);
        int parentOfNode2 = this->findParent(node2);
        if (parentOfNode1 != parentOfNode2)
        {
            this->rank[parentOfNode2] = parentOfNode1;
        }
    }
    bool areNodesInTheSameSet(int node1, int node2)
    {
        int parentOfNode1 = this->findParent(node1);
        int parentOfNode2 = this->findParent(node2);
        return parentOfNode1 == parentOfNode2;
    }
};
ll cases = 1;
void solveCase(ll testCaseNum)
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    int u, v;
    DSU mochaForest(n), dianaForest(n);
    for (int i = 0; i < m1; i++)
    {
        cin >> u >> v;
        u--, v--;
        mochaForest.mergeNodes(u, v);
    }
    for (int i = 0; i < m2; i++)
    {
        cin >> u >> v;
        u--, v--;
        dianaForest.mergeNodes(u, v);
    }
    int noOfNewEdges = 0;
    vector<pair<int, int>> newEdges;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((mochaForest.areNodesInTheSameSet(i, j) || dianaForest.areNodesInTheSameSet(i, j)) == false)
            {
                mochaForest.mergeNodes(i, j);
                dianaForest.mergeNodes(i, j);
                noOfNewEdges++;
                newEdges.push_back({i+1, j+1});
            }
        }
    }
    cout << noOfNewEdges;
    for (pair<int, int> edge : newEdges)
    {
        cout << "\n"
             << edge.first << " " << edge.second;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("TestCasesInput.txt", "r", stdin);
    // freopen("TestCaseOutput.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}