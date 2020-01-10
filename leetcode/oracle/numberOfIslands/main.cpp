
#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

class Solution
{
public:
    vector<int> track;
    vector<vector<int>> adjlist;

    void dfs(int i)
    {
        if(track[i])
        return;
        else
        {
            track[i]=1;
            for(auto z=adjlist[i].begin();z!=adjlist[i].end();z++){
                if(*z==0)
                dfs(*z);
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int numberOfRows = grid.size();
        int numberOfCols = grid[0].size();
        int n = 0;
        int temp[numberOfRows][numberOfCols];
        for (int i = 0; i < numberOfRows; i++)
        {
            for (int j = 0; j < numberOfCols; j++)
            {
                /* code */
                if (grid[i][j] == '1')
                    n++, temp[i][j] = n;
                else
                    temp[i][j] = 0;
            }
        }
        track = vector<int>(n, 0);
        vector<vector<ll>> adjlist = vector<vector<ll>>(n);
        int dum = 0;
        for (int i = 0; i < numberOfRows && dum != n; i++)
        {
            for (int j = 0; j < numberOfCols && dum != n; j++)
            {
                /* code */
                if (grid[i][j] == '1')
                {
                    if (i != numberOfRows - 1 && temp[i + 1][j])
                    {
                        adjlist[temp[i + 1][j] - 1].push_back(temp[i][j] - 1);
                        adjlist[temp[i][j] - 1].push_back(temp[i + 1][j] - 1);
                    }
                    if (j != numberOfCols - 1 && temp[i][j + 1])
                    {
                        adjlist[temp[i ][j+1] - 1].push_back(temp[i][j] );
                    adjlist[temp[i ][j] - 1].push_back(temp[i][j+1] - 1);
                    }
                }
            }
        }
        int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (track[i] == 0)
        {
            count++;
            dfs(i);
        }
    }
    return count;
    }
    
}
;
int main()
{
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
        vector<vector<char>> grid;
        for()
    }
    return 0;
}
