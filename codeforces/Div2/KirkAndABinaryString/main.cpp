#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define ifor(n) for(ll i=01;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
int main()
{
    string s,ans="";
    cin>>s;
    ll n=s.size(),d[n]={0};
    d[0]=1;
    for (ll i = 01; i < n; ++i) {
        if(s[i]>=s[i-1])
            d[i]=d[i-1]+1;
        else
            d[i]=d[i-1];
    }
   // string ans=" ";
    ans+='0';
    for (ll j = 01; j <n ; ++j) {
        if(d[j]==d[j-1])
        {
            ans+='0';
            ans[j-1]='1';
        }
        else
            ans+=ans[j-1];
    }
    cout<<ans;
    return 0;
}
//0011001100001011101000