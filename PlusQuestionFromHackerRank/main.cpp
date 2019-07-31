#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define vs vector<string>
#define imap map<ll,ll>
#define smap map<string,ll>
#define set set<ll>
typedef long double ld;
typedef long long int ll;
vs inp;
ll max(ll x, ll y) {
    return x > y ? x : y;

}
ll h=0,v=0,re=0;
ll min(ll x, ll y) {
    return x > y ? y : x;
}
ll n,m,hi=0,vj=0;
ll lens(ll i,ll j)
{
    ll hb=0,hf=0,vt=0,vd=0;
    char c='G';
    for (ll k = j+1; k <m; ++k) {
        if(c==inp[i][k])
            hf++;
        else
            break;
    }
    for (ll k = j-1; k>=0 ; --k) {
        if(c==inp[i][k])
            hb++;
        else
            break;
    }
    for (ll k = i+1; k <n ; ++k) {
        if(c==inp[k][j])
            vd++;
        else
            break;
    }
    for (ll k = i-1; k>=0 ; --k) {
        if(c==inp[k][j])
            vt++;
        else
            break;
    }
    hf=min(hf,hb);
    hf=min(hf,vt);
    hf=min(hf,vd);
    if(re&&(hi+re>i-hf+1)&&(vj+re>j-hf+1))
    {
        if(i-hf<=hi+re)
        {
            hf-=hi+re+hf-i+1;
        }
        if(j-hf>=vj+re)
        {
            hf-=vj+re+hf-j+1;
        }
    }
    if(hf<=0)
        return 0;
    hi=i,vj=j,re=hf;
        return 4*hf+1;
}

int main() {
    string s;
    cin>>n>>m;
    vi ans;
    sfor(n)
    {
       cin>>s;
       inp.pb(s);
    }
ll q=0;
    for (ll j = 1; j <n-1 ; ++j) {
        for (ll i = 1; i <m-1; ++i) {
            if(inp[j][i]!=inp[j][i-1]||inp[j][i]!=inp[j-1][i]||inp[j][i]!=inp[j+1][i]||inp[j][i]!=inp[j][i+1]||inp[j][i]=='B')
                continue;
            q=lens(j,i);
            if(q)
            {
             ans.pb(q);
             ll z=q-1;
             i+=z/4+1;
            }
        }
        }
    if(!ans.size())
    {
    cout<<1;
        return 0;}
    ans.pb(1);
    sort(ans.bg,ans.ed,greater<ll>());
    cout<<ans[0]*ans[1]<<endl;
    return 0;}