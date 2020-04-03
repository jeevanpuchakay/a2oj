#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
int main()
{
    ll n;
  ll  k;
    cin >> n >> k;
    vi pos;
    string s;
    cin >> s;
    ll as = 0, bs = 0;
    if(k==0){
        as=s[0]=='a'?1:0;
        bs=1-as;
        ll mas=0;
        mas=max(as,bs);
        sfor(01,n,i){
            if(s[i]==s[i-1]){
                if(s[i]=='a'){
                    as++;
                    bs=0;
                    mas=max(as,mas);
                }
                else{
                    bs++;as=0;
                    mas=max(bs,mas);
                }
            }
        }
        cout<<mas;return 0;
    }
    sfor(0, n, i)
    {
        if (s[i] == 'a')
            as++;
        else
            bs++;
    }
    char check = as < bs ? 'a' : 'b';
    ll start = 0;
    sfor(0, n, i)
    {
        if (check == s[i])
        {
            pos.pb(i) ;
        }
    }
    ll ans = 0;
    as=min(as,bs);
//    cout<<"as "<<as;
    for (ll i = 0; i<as; i++)
    {
        ll count = 0;
        if (i == 0)
            count = pos[0]+1;
        else{
            count+=pos[i]-pos[i-1];
        }    
        if(i+k-1>=as){
            count+=n-pos[i]-1;
        }
        else{
            count+=pos[i+k-1]-pos[i];
            if(i+k<as){
                count+=pos[i+k]-pos[i+k-1]-1;
            }else{
                count+=n-1-pos[i+k-1];
            }
        }

        ans = max(ans, count);
    }
    cout<<ans;
}