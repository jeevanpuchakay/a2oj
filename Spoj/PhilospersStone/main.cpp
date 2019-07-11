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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, w;
        cin >> h >> w;
        ll matrix[h][w];
        sfor(0, h, i)
                sfor(0, w, j)
                    cin >>
            matrix[i][j];
        sfor(01, h, i)
        {
            sfor(0, w, k)
            {
                ll a = 0;
                sfor(k - 1, k + 2, j)
                {
                    if (j >= 0 && j < w)
                    {
                        a = max(a, matrix[i-1][j]);
                    }
                }
                matrix[i][k] += a;
            }
        }
        ll maxInLastRow = 0;
        sfor(0, w, i)
        {
            maxInLastRow = max(maxInLastRow, matrix[h - 1][i]);
        }
        //cout<<endl;
        /*sfor(0, h, i)
        {
            sfor(0, w, j)
                    cout
                << matrix[i][j] << " ";
            cout << endl;
        }*/
        cout<<maxInLastRow<<endl;
    }
    return 0;
}
