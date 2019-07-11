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
    cin>>cases;
    sfor(0,cases,t){
        ll n;cin>>n;char x;ll y;
        vector<vi> a(4,vi(5,0));
        ll maxcount=0,maxshowname=0,maxshowtime=0;
                map<pair<ll,ll>,ll>track;
        sfor(0,n,i){
            cin>>x>>y;
            a[x-'A'][y/3]++;
            track[{x-'A',y/3}]++;
            if(a[x-'A'][y/3]>maxcount){
                maxshowname=x-'A',maxshowtime=y/3,maxcount=a[x-'A'][y/3];
            }
        }
        ll ans=100*maxcount;
        if(ans==0){
            cout<<-400<<endl;continue;
        }
        ans=0;vi time(5,0),show(5,0);
        track[{maxshowname,maxshowtime}]=1;ll fare=100;
        for(auto z=track.ed;(++z)!=track.bg&&fare;z--){
            z--;
            ll showtime=((*z).first.second);
            ll showname=((*z).first.first);
            if((!time[showtime])&&(!show[showname])){
                ans+=((*z).second)*(fare);
                time[showtime]=1;show[showname]=1;fare-=25;
            }
            z++;
        }
        ans-=100*(fare/25);
        cout<<ans<<endl;

    }
    return 0;
}


/*
5
12
A 3
B 12
C 6
A 9
B 12
C 12
D 3
B 9
D 3
B 12
B 9
C 6
7
A 9
A 9
B 6
C 3
D 12
A 9
B 6
2
A 9
B 6
1
D 12
0

*/