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

string Solution::solve(int x, int y, int n, int r, vector<int> &a, vector<int> &b)
{
    vector<vector<int>> state(y + 1, vector<int>(x + 1, -1));
    sfor(0, x + 1, i)
    {
        sfor(0, y + 1, j)
        {
            sfor(0, n, centreNumber)
            {
                if ((a[centreNumber] - i) * (a[centreNumber] - i) +
                        (b[centreNumber] - j) * (b[centreNumber] - j) <=
                    r * r)
                {
                    state[j][i] = 0;
                }
            }
        }
    }
    if (state[y][x] == 0 || state[0][0] == 0)
        return "NO";
    queue<pair<int, int>> bfsQ;
    bfsQ.push({0, 0});
    state[0][0] = 1;
    while (!bfsQ.empty())
    {
        pair<int, int> currentNode = bfsQ.front();
        int yCo = currentNode.first;
        int xCo = currentNode.second;
        bfsQ.pop();
        if (xCo == x && yCo == y)
        {
            return "YES";
        }
        if ((xCo + 1 <= x) && (state[yCo][xCo + 1] == -1))
        {
            state[yCo][xCo + 1] = 1;
            bfsQ.push({yCo, xCo + 1});
        }
        if ((xCo + 1 <= x && yCo + 1 <= y) && (state[yCo + 1][xCo + 1] == -1))
        {
            state[yCo + 1][xCo + 1] = 1;
            bfsQ.push({yCo + 1, xCo + 1});
        }
        if ((yCo + 1 <= y) && (state[yCo + 1][xCo] == -1))
        {
            state[yCo + 1][xCo] = 1;
            bfsQ.push({yCo + 1, xCo});
        }
        if ((xCo - 1 >= 0 && yCo + 1 <= y) && (state[yCo + 1][xCo - 1] == -1))
        {
            state[yCo + 1][xCo - 1] = 1;
            bfsQ.push({yCo + 1, xCo - 1});
        }
        if ((xCo - 1 >= 0) && (state[yCo][xCo - 1] == -1))
        {
            state[yCo][xCo - 1] = 1;
            bfsQ.push({yCo, xCo - 1});
        }
        if ((xCo - 1 >= 0 && yCo - 1 >= 0) && (state[yCo - 1][xCo - 1] == -1))
        {
            state[yCo - 1][xCo - 1] = 1;
            bfsQ.push({yCo - 1, xCo - 1});
        }
        if ((yCo - 1 >= 0) && (state[yCo - 1][xCo] == -1))
        {
            state[yCo - 1][xCo] = 1;
            bfsQ.push({yCo - 1, xCo});
        }
        if ((xCo + 1 <= x && yCo - 1 >= 0) && (state[yCo - 1][xCo + 1] == -1))
        {
            state[yCo - 1][xCo + 1] = 1;
            bfsQ.push({yCo - 1, xCo + 1});
        }
    }
    if (state[y][x] == 1)
    {
        return "YES";
    }
    return "NO";
}
