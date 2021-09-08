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
    int n, ans = 0;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    vector<int> oCountInCols(n, 0), oCountInRows(n, 0), dotCountInCols(n, 0), dotCountInRows(n, 0);
    vector<bool> isXWinCol(n, false), isXWinRow(n, false);
    vector<bool> isColSingleX(n, false), isRowSingleX(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'O')
            {
                oCountInCols[j]++;
                oCountInRows[i]++;
            }
            else if (grid[i][j] == '.')
            {
                dotCountInCols[j]++;
                dotCountInRows[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (oCountInCols[i] < (n - oCountInCols[i]))
        {
            ans++;
            isXWinCol[i] = true;
        }
        if (oCountInRows[i] < (n - oCountInRows[i]))
        {
            ans++;
            isXWinRow[i] = true;
        }
    }
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