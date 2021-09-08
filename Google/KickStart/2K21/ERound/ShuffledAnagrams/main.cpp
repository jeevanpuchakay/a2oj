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
pair<string, bool> permutate(unordered_map<char, int> &freq, string currString, string &s)
{
    pair<string, bool> ans = {"", false};
    if (currString.size() == s.size())
    {
        for (int i = 0; i < s.size(); i++)
            if (currString[i] == s[i])
                return {"", false};
        return {currString, true};
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[char('a' + i)] > 0)
        {
            freq[char('a' + i)]--;
            ans = permutate(freq, currString + char('a' + i), s);
            freq[char('a' + i)]++;
            if (ans.second == true)
            {
                return ans;
            }
            ans = {"", false};
        }
    }
    return ans;
}
void solveCase(ll testCaseNum)
{
    string s;
    pair<string, bool> ans = {"", false};
    cin >> s;
    unordered_map<char, int> freq;
    int n = s.size();
    for (char c : s)
    {
        freq[c]++;
        if (freq[c] > (n / 2))
        {
            printTestCaseNum(testCaseNum) << "IMPOSSIBLE" << endl;
            return;
        }
    }
    ans = permutate(freq, "", s);
    if (ans.second == true)
        printTestCaseNum(testCaseNum) << ans.first << endl;
    else
        printTestCaseNum(testCaseNum) << "IMPOSSIBLE" << endl;
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