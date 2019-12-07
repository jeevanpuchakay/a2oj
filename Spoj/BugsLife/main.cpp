#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
#define min(x, y) (x > y) ? y : x
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

vi marked;
int status = 0;

void bfs(ll node, int color)
{
    if (status)
        return;

    marked[node] = color;
    if (color == 1)
        color = 2;
    else
    {
        color = 1;
    }
    for (auto z = adjlist[node].bg; z != adjlist[node].ed && (!status); z++)
    {
        if (!marked[*z])
        {
            bfs(*z, color);
        }
        else
        {
            if (marked[node] == marked[*z])
            {
                status = 1;
            }
        }
    }
    return;
}
int main()
{
    ll t;
    cin >> t;
    sfor(0, t, o)
    {
        ll nodes, edges;
        cin >> nodes >> edges;
        adjlist = vector<vector<ll>> (nodes);
        ll x, y;
        status=0;
        sfor(0, edges, i)
        {
            cin >> x >> y;
            x--, y--;
            adjlist[x].pb(y);
            adjlist[y].pb(x);
        }
        marked = vi(nodes, 0);
        int color = 1;
        sfor(0, nodes, i)
        {
            if (!marked[i])
            {
                bfs(i, color);
            }
        }
        cout << "Scenario #" << o + 1 << ":" << endl;
        if (status)
        {
            cout << "Suspicious bugs found!" << endl;
        }
        else
        {
            cout << "No suspicious bugs found!" << endl;
        }
        //cout<<endl<<o<<endl;
        //sfor(0,nodes,p)
        //cout<<marked[p]<<" ";
    }
    return 0;
}
/*2
3 3
1 2
2 3
1 3
4 2
1 2
3 4*/