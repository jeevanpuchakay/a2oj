#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,int>
#define set set<ll>
typedef long double ld;
typedef long long int ll;
ll n;
ll max(ll x, ll y) {
    return x > y ? x : y;

}

ll min(ll x, ll y) {
    return x > y ? y : x;
}
ll find(ll seq[],ll a,ll j)
{
    sfor(n)
    if(seq[i+1]==a&&(i+1)!=j)
        return i;
    return -1;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll b=1;
        cin>>n;
        ll seq[n+1];
        sfor(n)
        {
            cin>>seq[i+1];
        }
        set chef;
        imap haha;
        sfor(n)
        {
            auto a=chef.insert(seq[seq[i+1]]);
            if(!a.second&&haha[seq[seq[i+1]]]!=seq[i+1])
            {
                cout<<"Truly Happy"<<endl;
                b=0;
                break;
            }
            haha[seq[seq[i+1]]]=seq[i+1];
        }
        if(b)
            cout<<"Poor Chef"<<endl;
        /*ll b=1;
        for (ll j = 1; j <= n; ++j) {
           a=seq[seq[j]];
           sfor(n)
           {
               if(i+1==j||seq[i+1]==seq[j])
                   continue;
               if(a==seq[seq[i+1]])
               {
                   cout<<"Truly Happy"<<endl;
                   b=0;
                   break;
               }
           }
           if(!b)
               break;
        }
        if(b)
            cout<<"Poor Chef"<<endl;*/
    }
    return 0;
}