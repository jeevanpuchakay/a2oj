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
    ll n,m,temp,cpy,ans;
    cin>>n;
    string s,name;
    cin>>s;
    cin>>m;
    vi lol;
    //sfor(0,n,i)refer[s[i]-'a']++;
    sfor(0,m,j){
        ans=0;
        cin>>name;
        temp=name.sz;
        cpy=temp;
        lol=vi(26,0);
        sfor(0,cpy,i){
            lol[name[i]-'a']++;
        }
        ll start=0;
        while((temp>0)&&(start<n)){
            if(lol[s[start]-'a']>0){
                lol[s[start]-'a']--;
                temp--;
            }
            start++;
        }
        cout<<start<<endl;
    }
}