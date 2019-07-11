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
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
        ll n;
        cin >> n;
        priority_queue<pair<int, pair<int, int>>> que;
        que.push({n, {-1, -n }});
        vi ans(n, 0);
        pair<int, pair<int, int>> temp;
        int l = 0, r = 0;
        int counter = 1;
        while (!que.empty() && (counter <= n))
        {
            temp = que.top();
            que.pop();
            l = -temp.second.first;
            r = -temp.second.second;
            ans[-1+(l + r) / 2] = counter;
            counter++;
            if (l == r)
                continue;
            if (((l + r) / 2 != l))
                que.push({(l + r) / 2 - l, {-l, -(-1 + (l + r) / 2)}});
            if (r != (l + r) / 2)
                que.push({r - (l + r) / 2, {-(1 + (l + r) / 2), -r}});
        }
        sfor(0, n, i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
