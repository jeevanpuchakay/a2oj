#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,ll>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll b[n];
        sfor(i,n-1)
        cin>>b[i+1];
        ll a,c;
        ll sum[n];
        sum[0]=0;
        c=-1;
        sum[1]=b[1];
        for (ll j = 2; j <n ; ++j) {
            sum[j]=c*b[j]+sum[j-1];
            c*=-1;
        }
        while (q--){
            cin>>a>>c;
            if((c-a)%2) {
                if (a > c)
                    swap(a, c);
                if(a%2)
                cout<<sum[c-1]-sum[a-1]<<endl;
                else
                    cout<<-1*sum[c-1]+sum[a-1]<<endl;
            }
            else
            {
                cout<<"UNKNOWN"<<endl;
            }
        }
    }
    return 0;
}
