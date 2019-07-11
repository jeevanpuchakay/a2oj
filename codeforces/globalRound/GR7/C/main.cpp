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
    ll n, k;
    cin >> n >> k;
    vi arr(n, 0);
    vi instances(k);
    ll start = 0;
    sfor(0, n, i)
    {
        cin >> arr[i];
        if (arr[i] <= n && arr[i] >= n - k + 1)
        {
            instances[start++] = i;
        }
    }
    start = 01;
    ll last = 0;
    sort(instances.bg, instances.ed);
    sfor(1, k, i)
    {
        start *= (instances[i] - instances[i - 1]);
        start %= 998244353;
    }
    cout<<((n*n+n)/2)-((n-k+1)*(n-k))/2<<" "<<start<<endl;
    return 0;
}