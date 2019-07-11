#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n,m;
        cin>>n>>m;
        ll ar[n][m];
        sfor(0,n,i)
        sfor(0,m,j)
        cin>>ar[i][j];
        ll large=max(n,m);
        ll dp[large+1][large+1][large+1];
        large++;
        memset(dp,0,large*large*large*sizeof(ll));
        sfor(0,n,i){
            sfor(0,m,j)
            dp[i][j][1]=1;
        }
        ll small=min(n,m);
        ll count=n*m;
        sfor(3,small,i){
            ll start=(i-1)/2;
            sfor(start,n-start,rno){
                
                    ll first=dp[rno][cno][1];

            }

            i++;
        }
    }
    return 0;
}

