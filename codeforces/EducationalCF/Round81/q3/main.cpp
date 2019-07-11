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
string s,t;
ll n,m;
ll go(ll pos){
    ll ans=0,it=0;
    while(it<n&&pos<m){
        if(s[it]==t[pos])
        ans++,pos++;
        it++;
    }
    return ans;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,ti){
        
        cin>>s>>t;
        vi a(26,0),b(26,0);
        n=s.sz,m=t.sz;
        sfor(0,n,i){
            a[s[i]-'a']++;
        }
        int flag=0;
        sfor(0,m,i){
            b[t[i]-'a']++;
            if(b[t[i]-'a']&&(!a[t[i]-'a']))
            {
                flag=1;
                cout<<-1<<endl;
                break;
            }
        }
        if(flag)continue;
        ll count=0;
        ll ite=0;
        while(ite<m){
            ll temp=go(ite);
            ite+=temp;
            count++;
        }
        cout<<count<<endl;

        }
        
    return 0;
}
