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

vi pime(30009, -1);

int isIt(int n)
{
    if (pime[n] != -1)
    {
        return pime[n];
    }
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
        {
            pime[n] = 0;
            return 0;
        }
    pime[n] = 1;
    return 1;
}

vector<int> Solution::primesum(int A)
{
    //int c=2;
    vi ans;

    pime[0] = 0, pime[1] = 0;
    pime[2] = 1;
    pime[3] = 1;
    if (isit(2) && isit(A - 2))
    {
        ans.pb(c);
    }
    sfor(3, sqrt(A) + 1, c)
    {
        if (isit(c) && isit(A - c))
        {
            ans.pb(c);
        }
        c++;
    }
    return ans;
}
