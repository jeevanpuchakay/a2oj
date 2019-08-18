#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define ifor(n) for(ll i=1;i<n;i++)
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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,count=0;
        cin>>n>>k;
        map<ll,ll> feq;
        ll a[n],d[n]={0};
        sfor(n)
        {
            cin>>a[i];
            feq[a[i]]++;
            d[i]=feq[a[i]];
        }
        int m=0;
        ifor(n+1)
        {m=0;
            while(m*i<k)
                m++;
            for (int j = 0; j+i<=n ; ++j) {
                vi b(a+j,a+j+i);
                sort(b.bg,b.ed);
                ll c=k,x=0,f=0;
                x=b[k/m-1];
               for (auto z=b.bg;z!=b.ed;z++)
               { if(*z==x)
                       f++;
               }
                if(find(b.bg,b.ed,f)!=b.ed)
                {count++;
               // cout<<i<<" "<<j<<endl;
               }
            }}
        cout<<count<<endl;}
    return 0;
}