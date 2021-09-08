#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<int>> adjlist;
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
bool isVowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int changeStringToCharC(string given, char c)
{
    int ans = 0;
    for (char character : given)
    {
        if (character == c)
            continue;
        else if (adjlist[character - 'A'][c - 'A'] != INT_MAX)
            ans += adjlist[character - 'A'][c - 'A'];
        else
            return -1;
    }
    return ans;
}
void solveCase(ll testCaseNum)
{
    string s;
    char a, b;
    cin >> s;
    int n = s.size(), k, ans = INT_MAX;
    cin >> k;
    adjlist = vector<vector<int>>(26, vector<int>(26, INT_MAX));
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        adjlist[a - 'A'][b - 'A'] = 1;
    }
    for (int k = 0; k < 26; k++)
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (adjlist[i][k] == INT_MAX || adjlist[k][j] == INT_MAX)
                    continue;
                if (adjlist[i][j] > (adjlist[i][k] + adjlist[k][j]))
                    adjlist[i][j] = (adjlist[i][k] + adjlist[k][j]);
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        int noOfReplacementsReq = changeStringToCharC(s, (char)('A' + i));
        if (noOfReplacementsReq == -1)
            continue;
        ans = min(ans, noOfReplacementsReq);
    }
    if (ans == INT_MAX)
        ans = -1;
    printTestCaseNum(testCaseNum) << ans << endl;
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