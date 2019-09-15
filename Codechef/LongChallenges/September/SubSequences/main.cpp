#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 10000
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
ll n,dp[mod][100][100]={0},sum,k;
ll go(ll a[],ll k1,ll sum1,ll i){
    if(k1==k){
        if(sum1==sum){
            return 1;
        }
        return 0;
    }
    else if(n-i<k){
        return 0;
    }
    else if(sum1+a[i]>sum)
        return 0;
    else if(dp[sum1][k1][i])
        return dp[sum1][k1][i];
    else{
       // return go(a,k-1,sum-a[i],i+1)+go(a,k,sum,i+1);
       //dp[k1-1][sum1-a[i]][i
       dp[sum1][k1][i]=go(a,k1+1,sum1+a[i],i+1)+go(a,k1,sum1,i+1);
    }
    return dp[sum1][k1][i];
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        dp[mod][100][100]={0};
      //  ll k;
        cin>>n>>k;
        ll a[n];
        sfor(n)
        cin>>a[i];
       sort(a,a+n);
        sum=0;
        sfor(k)
        {sum+=a[i];}
        ll b=go(a,0,0,0);
        cout<<b<<endl;
    }
    return 0;
}