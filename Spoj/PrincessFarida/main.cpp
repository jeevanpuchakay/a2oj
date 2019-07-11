#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y) {return (x>y)?x:y;}
#define min(x,y) (x>y)?y:x
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
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
ll n;
vi inputArray(1000999);
vi dp(100009,0);
ll go(ll state){
    if(state>n-1)
    return 0;
    if(state==n-1)
    return inputArray[n-1];
    else{
        ll &ans=dp[state];
        if(ans==0){
            ans=max(inputArray[state]+go(state+2),go(state+1));
        }
    return ans;
    }

}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        cin>>n;
        sfor(0,n,i)
        cin>>inputArray[i];
        dp=vi(n);
        dp[0]=go(0);
        cout<<"Case "<<t+1<<": "<<dp[0]<<endl;
       // sfor(0,n,i)
        //cout<<dp[i]<<" ";
    }
    return 0;
}

