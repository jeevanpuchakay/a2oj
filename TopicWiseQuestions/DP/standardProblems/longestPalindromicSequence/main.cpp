#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    string s;
    cin>>s;
    ll n=s.sz;
    ll dp[n][n];
    memset(dp,0,n*n*sizeof(ll));
    //All the strings of length one
    sfor(0,n,i)
    dp[i][i]=1;
    sfor(1,n,lenthOfString){
        sfor(0,n-lenthOfString,j){
            if(s[j]==s[j+lenthOfString]){
                dp[j][j+lenthOfString]=2+dp[j+1][j+lenthOfString-1];
            }
            else{
                dp[j][j+lenthOfString]=max(dp[j][j+lenthOfString-1],dp[j+1][j+lenthOfString]);
            }
        }
    }
   // sfor(0,n,i)
    //{
      //  sfor(0,n,j)
       // cout<<dp[i][j]<<" ";
        //cout<<endl;
    //gi}
    cout<<dp[0][n-1]<<endl;
    return 0;
}

