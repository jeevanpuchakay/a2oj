#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
string s;
ll n, apipe, bpillar,z=1;
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        cin >> n >> apipe >> bpillar;
        cin >> s;
        ll dp[n+2][2];
        dp[0][0]=bpillar;
        dp[0][1]=mod;
        for (int i = 0; i <n; ++i) {
            dp[i][1]=min(dp[i-1][0]+2*apipe+2*bpillar,dp[i-1][1]+2*bpillar+apipe);
            if((i!=n-1)&&s[i]=='1'||s[i+1]=='1')
                dp[i][0]=mod;
            else if(s[i-1]=='1')
                dp[i][0]=2*apipe+bpillar+dp[i-1][1];
            else{
                dp[i][0]=min(apipe+bpillar+dp[i-1][0],2*apipe+bpillar+dp[i-1][1]);
            }
            dp[n-1][1]=mod;
        }
        cout<<dp[n-1][0]<<endl;
    }}