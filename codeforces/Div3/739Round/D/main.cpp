#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000000
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
string toString(ll num)
{
    string numString = "";
    if (num == 0)
        return "0";
    while (num > 0)
    {
        numString = char(num % 10 + '0') + numString;
        num /= 10;
    }
    return numString;
}
void powersOf2(vector<string> &twoS)
{
    long long unsigned int start = 1;
    for (; start <= 1000000000000000000; start *= 2)
    {
        twoS.push_back(toString(start));
    }
    return;
}
int noOfOperationsNeeded(string given, string target)
{
    int givenPtr = 0, targetPtr = 0, operations = 0;
    while (givenPtr < given.size() && targetPtr < target.size())
    {
        if (given[givenPtr] == target[targetPtr])
        {
            givenPtr++;
            targetPtr++;
        }
        else
        {
            operations++;
            givenPtr++;
        }
    }
    operations += (given.size() - givenPtr + target.size() - targetPtr);
    return operations;
}
void solveCase(ll testCaseNum, vector<string> &twoS)
{
    string currNum;
    cin >> currNum;
    int ans = INT_MAX;
    for (string &powerOf2 : twoS)
    {
        ans = min(ans, noOfOperationsNeeded(currNum, powerOf2));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("TestCasesInput.txt", "r", stdin);
    // freopen("TestCaseOutput.txt", "w", stdout);
    vector<string> twoS;
    powersOf2(twoS);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t, twoS);
    }
    return 0;
}