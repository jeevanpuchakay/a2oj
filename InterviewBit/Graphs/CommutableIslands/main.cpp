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

vi authority;


ll parent(ll src){
    if(src!=authority[src])
    authority[src]=parent(authority[src]);

    return authority[src];

}

int Solution::solve(int a, vector<vector<int> > &b) {

    ll m=b.size();
    set<pair<ll,ll> > minHeap;

    sfor(0,m,i){
        minHeap.insert({b[i][2],i});
    }
    authority=vi(a+1,-1);ll ans=0;
    for(auto start=minHeap.bg;start!=minHeap.ed;start++){

        ll weit=(*start).first;
        ll edge=(*start).second;
        ll src=b[edge][0];
        ll dst=b[edge][1];
        ll srcParent=parent(src);
        ll dstParent=parent(dst);
        if(srcParent!=dstParent||(srcParent==-1)){
            ans+=weit;
            if(srcParent<dstParent){
                authority[src]=dstParent;
            }else{
                authority[dst]=srcParent;
            }

        }

    }

    return ans;
}
