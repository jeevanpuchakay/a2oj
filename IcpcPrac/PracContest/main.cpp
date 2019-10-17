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
ll a[55];
int main()
{
    ll t,n,k,sum=0,c=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sum=0;c=0;
        sfor(0,n,i)
        {
            cin>>a[i];
            if(a[i]<=k)
            sum+=a[i];
        }
        sort(a,a+n);
        ll i=0;
        for(;i<n;i++)
            if(a[i]>k)
                break;
        for (ll j = n-2; j >=i ; --j) {
            if(c>0) {
                c -= a[j] - k;
            }
            else{
            c+=a[j]-k;
            }
        }
        if(c) {
            if (c > 0) {
                sum = sum + a[n - 1] - c + (n - i - 2) * k;
            } else
                sum = sum + a[n - 1] + c + (n - i - 2) * k;

        } else
            sum = sum + a[n - 1] + c + (n - i - 2) * k;
            cout<<sum<<endl;
    }
    return 0;
}
