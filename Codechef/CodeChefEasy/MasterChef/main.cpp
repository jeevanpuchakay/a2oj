#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back

#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
ll n,m;
ll maxdec(pair ratings[],ll judge,ll k)
{
    ll sum=0;
    if(judge>=m)
        return 0;
    else if(adjlist[judge][0]>k)
        return 0;
    else{
        for (int i = 0; i < n; ++i) {
            if(ratings[i]->second<=adjlist[judge][1]&&adjlist[judge][2]<=ratings->second)
            {
                return max(ratings,judge,k)
            }
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>n>>k>>m;
        pair<ll,ll> ratings[n];
        ll totratings=0,c,l,r;
        sfor(n)
        {
            cin>>l;
            ratings[i].insert(mp(l,i));
            totratings+=l;
        }
        sort(ratings,ratings+n);
        sfor(m)
        {
            cin>>l>>r>>c;
            vi dum;
            dum.pb(c);
            dum.pb(--l);
            dum.pb(--r);
            adjlist.pb(dum);
        }
        sort(adjlist.bg,adjlist.ed);

    }
    return 0;
}