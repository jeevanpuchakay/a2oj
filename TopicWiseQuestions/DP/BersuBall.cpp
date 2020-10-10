#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
#define max(x,y) (x>y)?x:y
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
int main()
{
    ll n,m;
    cin>>n;
    ll a[109],b[109];
    sfor(0,n,p)
    cin>>a[p];
    cin>>m;
    sfor(0,m,p)
    cin>>b[p];
    sort(a,a+n);
    sort(b,b+m);
    ll i=0,j=0,count=0;
    sfor(0,n,k){
        while(j<m&&i<n&&a[i]-1>b[j])
            j++;
        if(j>=m||i>=n)
        break;
        if(a[i]==b[j]||a[i]-b[j]==1||b[j]-a[i]==1)
        {
            //cout<<a[i]<<" "<<b[j]<<endl;
            i++,j++,count++;
        }
        else{
            i++;
            while(j<m&&i<n&&a[i]-1>b[j])
            j++;
        }
    }
    cout<<count<<endl;
    return 0;
}
