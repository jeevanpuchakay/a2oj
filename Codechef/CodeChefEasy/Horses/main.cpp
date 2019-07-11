#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;

ll max(ll x, ll y) {
    return x > y ? x : y;

}

ll min(ll x, ll y) {
    return x > y ? y : x;
}

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        sfor(n)
        cin>>a[i];
        ll dif=mod;
        for (int j = 0; j < n; ++j) {
            for (int i = j+1; i <n ; ++i) {
                ll d=a[j]-a[i];
                if(d<0)
                    d*=-1;
                dif=min(d,dif);
            }
        }
        cout<<dif<<endl;
    }
    return 0;
}