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
    sfor(0,cases,tes){
        ll n,sum;cin>>n>>sum;
        vi den(n),lol(n,0);int a=1;
        sfor(0,n,i){
            cin>>den[i];
            if(sum%den[i]){
                a=0;
                lol[i]=(sum/den[i])+1;a=0;break;

            }
        }
        if(a)
        sfor(0,n,i){
            sfor(i+1,n,j){
                ll c=den[i],b=den[j];
                if(max(c,b)%min(c,b)){
                    
                }
            }
        }
        
    }
    return 0;
}