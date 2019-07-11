#include<bits/stdc++.h>
using namespace std;
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
#define vi vector<ll>
#define imap map<ll,ll>
#define smap map<string,ll>
#define set set<ll>
typedef long double ld;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n, neg = 0, pos = 0, c = 0;
        cin >> n;
        ll a[n];
        sfor(n) {
            cin >> a[i];
            if (a[i] < 0) {
                neg++;
            } else
                pos++;
    }
    c=max(neg,pos);
        cout<<c<<" ";
        c=min(neg,pos);
        if(!c)
            c=max(neg,pos);
        cout<<c<<endl;
}
    return 0;
}
//1
//5
//5 2 4 6 7