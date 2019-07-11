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
ll dp[5009];
int main()
{
    string s;
    ll n,a;
    cin>>s;
    while(s[0]!='0'){
        n=s.size();
        dp[0]=1;
        sfor(1,n,i){
            a=(s[i-1]-'0')*10+s[i]-'0';
            //cout<<a<<" ";
            if(s[i]-'0')
            dp[i]=dp[i-1];
            else
                dp[i]=0;
            if(a<=26&&a>=10){
                if(i!=1)
                dp[i]+=dp[i-2];
                else
                    dp[1]+=dp[0];
            }
        }
        cout<<dp[n-1]<<endl;
        cin>>s;
    }
    return 0;
}
