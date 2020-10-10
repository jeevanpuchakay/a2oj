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
vi answer;
string sets[509];
ll n, m;
ll ans = 0;
int main()
{
    cin >> n >> m;
    unordered_map<string, ll> track, track2;
    sfor(0, n, i)
    {
        cin >> sets[i];
        track[sets[i]] = i + 1;
        track2[sets[i]] = i + 1;
    }
    string s = "";
    for (auto x : track)
    {
        string dum = x.first;
        reverse(dum.bg, dum.ed);
        if ((track[dum] == x.second) && (x.second != 0))
        {
            s = dum;
            track2[dum] = -1;
            ans++;
            break;
        }
    }
    for (auto x : track)
    {
        string dum = x.first;string dum2 = dum;
        reverse(dum.bg, dum.ed);
        if ((track[dum] != 0) && (track2[dum2] != -1) && (x.second) && (track2[dum] != -1) && (x.second != track[dum]))
        {
            s = dum2 + s + dum;
            ans++;
            ans++;
            track2[dum] = -1;
            track2[dum2] = -1;
            //            x.second = -1;
        }
    }

    cout << ans * m << endl;
    //sfor(0, n, i) if (answer[i]) cout << sets[i];
    cout << s << endl;
    return 0;
}