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

class Solution {
public:
    vector<vector<int>> adjlist;

    vector<bool> visited;
    void dfs(int currNode){
        if(visited[currNode])return;
        visited[currNode]=true;
        for(int neighbourNode: adjlist[currNode]){
            dfs(neighbourNode);
        }
        return;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        int ans=0;
        visited=vector<bool>(n,false);
        adjlist=vector<vector<int>>(n);
        for(vector<int> edge: edges){
            adjlist[edge[0]].push_back(edge[1]);
            adjlist[edge[1]].push_back(edge[0]);
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                ans++;
                dfs(i);
            }
        }
        return ans;
    }
};

void solveCase(ll testCaseNum)
{
    
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