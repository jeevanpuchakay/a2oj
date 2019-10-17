#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define sfor(a, n, i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x, i) (x&(1<<i))

int main() {
    ll t;
    ll n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ll a[n];
        sfor(0, n, i)cin >> a[i];
        ll ti=k/n;
        ll re=ti%3;
        while(re--){
            sfor(0,n,i){
                a[i]^=a[n-i-1];
            }
        }
        if(n>k&&n%2)
        {
            a[n/2]=0;
        }
        ti=k%n;
        sfor(0,ti,i)
            a[i]^=a[n-i-1];
        sfor(0,n,i)
        {
            cout<<a[i];
            if(i!=n-1)
                cout<<" ";
        }
        if(t!=-1)
            cout<<endl;
    }
    return 0;
}
