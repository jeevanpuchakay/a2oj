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
#define vc vector<char>
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

//1 from top towards down
//-1 from down towards up
//2 from left to right
//-2 from right to left
vector<vector<int>> visited;
class Solution
{
    vector<vector<pair<int, int>>> alphaPos;
    int height, width;

    bool dfs(vector<vector<char>> grid, string word, int row, int col, int sPos, int sWod, int direc)
    {
        if (sPos == sWod)
            return true;
        if ((col >= width) || (row >= height) || (col < 0) || (row < 0) || visited[row][col])
            return false;
        bool temp;
        if (word[sPos] != grid[row][col])
            return false;
        else
        {
            visited[row][col] = 1;
        }
        if (direc != 1)
        {
            temp = dfs(grid, word, row - 1, col, sPos + 1, sWod, -1);
            if (temp)
                return true;
        }
        if (direc != -1)
        {
            temp = dfs(grid, word, row + 1, col, sPos + 1, sWod, 1);
            if (temp)
                return true;
        }
        if (direc != 2)
        {
            temp = dfs(grid, word, row, col - 1, sPos + 1, sWod, -2);
            if (temp)
                return true;
        }
        if (direc != -2)
        {
            temp = dfs(grid, word, row, col + 1, sPos + 1, sWod, 2);
            if (temp)
                return true;
        }
        visited[row][col] = 0;
        return false;
    }

public:
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        vector<string> ans;
        alphaPos = vector<vector<pair<int, int>>>(26);
        height = board.sz;
        visited = vector<vector<bool>>(height, vector<bool>(width, false));
        if (height == 0)
            return ans;
        width = board[0].sz;
        sfor(0, height, i)
        {
            sfor(0, width, j)
            {
                alphaPos[board[i][j] - 'a'].pb({i, j});
            }
        }
        for (string word : words)
        {
            int n = word.sz;
            for (pair<int, int> start : alphaPos[word[0] - 'a'])
            {
                if (dfs(board, word, start.first, start.second, 0, n, 0))
                {
                    ans.pb(word);
                    break;
                }
            }
        }
        return ans;
    }
};
