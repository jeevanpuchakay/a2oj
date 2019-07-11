#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
int min(int x,int y,int z){
    x=x<y?x:y;
    return x<z?x:z;
}

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
string s1,s2;
ll n1,n2;
int dp[2009][2009];
//....n1
//n2
//..
//..
void go(){
    sfor(0,n2+1,i){
        dp[0][i]=i;
    }
    sfor(0,n1+1,i){
        dp[i][0]=i;
    }
    sfor(01,n1+1,i){
        sfor(01,n2+1,j){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j]=1+min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
            }
            //cout<<dp[i][j]<<" "<<s1[i-1]<<" "<<s2[j-1]<<" ";
        }
        //cout<<endl;
    }
    return;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        n1=s1.sz,n2=s2.sz;
        memset(dp,0,(2009)*(2009)* sizeof(int));
        go();
        cout<<dp[n1][n2]<<endl;
    }
    return 0;
}
