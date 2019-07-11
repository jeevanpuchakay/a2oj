#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
ll n;
vi dp(mod);
ll go(ll n){
    if(!n)
        return 0;
    if(!dp[n/2])
        dp[n/2]=max(go(n/2),n/2);
    if(!dp[n/3])
        dp[n/3]=max(go(n/3),n/3);
    if(!dp[n/4])
        dp[n/4]=max(go(n/4),n/4);
    return max(dp[n/2]+dp[n/3]+dp[n/4],n);
}
int main()
{
    while(cin>>n){

        dp[n]=go(n);
        cout<<dp[n]<<endl;
    }
    return 0;
}
