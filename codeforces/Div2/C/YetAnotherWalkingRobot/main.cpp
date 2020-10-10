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
int main()
{
    ll cases, n;
    cin >> cases;
    sfor(0, cases, t)
    {
        map<pair<ll, ll>, ll> vertices;
        cin >> n;
        string s;
        cin >> s;
        ll ans = mod;
        vertices[{0, 0}] = 0;
        ll x = 0, y = 0;
        ll lans = -1, rans = -1;
        sfor(0, n, i)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else
                y--;

            if (vertices.find({x, y}) != vertices.ed)
            {
                ll last = vertices[{x, y}];
                if (ans > (i - last + 2))
                {
                    ans = (i - last + 2);
                    lans = last + 1, rans = i + 1;
                }
            }
            vertices[{x, y}] = i + 1;
        }
        if (ans != mod)
        {
            cout << lans  << " " << rans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
