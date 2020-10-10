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
bool isit(int x, int y, int z)
{
    return ((x != -1) && (y != -1) && (z != -1));
}
int main()
{
    ll cases;
    cin >> cases;
    string s;
    int one, two, three;
    int maxLen;
    int n;
    sfor(0, cases, t)
    {
        cin >> s;
        maxLen = INT_MAX;
        n = s.sz;
        one = two = three = -1;
        sfor(0, n, i)
        {
            if (s[i] == '1')
            {
                one = i;
            }
            else if (s[i] == '2')
            {
                two = i;
            }
            else
            {
                three = i;
            }
            if (isit(one, two, three))
            {
                maxLen = min(maxLen, 1 + (max(one, max(two, three)) - min(one, min(two, three))));
            }
        }
        cout << (maxLen==INT_MAX?0:maxLen) << endl;
    }
    return 0;
}
