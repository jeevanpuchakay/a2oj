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
};
ll cases = 1;
void solveCase(ll testCaseNum)
{
    int n, ans = 0, currN;
    cin >> n;
    vector<int> permutation(n + 1, 0), ansPermutation(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        ansPermutation[i] = i;
        cin >> permutation[i];
    }
    for (; permutation != ansPermutation; ans++)
    {
        if (ans % 2 == 0)
        {
            for (int i = 1; i < n; i += 2)
                if (permutation[i] > permutation[i + 1])
                    swap(permutation[i], permutation[i + 1]);
        }
        else
        {
            for (int i = 2; i < n; i += 2)
                if (permutation[i] > permutation[i + 1])
                    swap(permutation[i], permutation[i + 1]);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("TestCasesInput.txt", "r", stdin);
    // freopen("TestCaseOutput.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}