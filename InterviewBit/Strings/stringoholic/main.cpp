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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}


int Solution::solve(vector<string> &a) {
    ll numberOfStrings=a.sz;
    if(numberOfStrings==0)return 0;
    vi times(numberOfStrings,0);
    sfor(0,numberOfStrings,i){
        ll n=a[i].size();
        ll time=1;
        string temp=a[i];
        string s=a[i];
        temp=s.substr(1,n-1)+s[0];
        while(temp!=s){
            time++;
            if(time%n!=0)
            temp=(temp.substr((time)%n-1,n-time%n)+temp.substr(0,time%n));
        }
        times[i]=time;
    }
    ll ans=times[0];
    sfor(1,numberOfStrings,i){
        ll copy=ans;
        if(ans>times[i])
        ans=gcd(ans,times[i]);
        else{
            ans=gcd(times[i],ans);
        }
        ans=(copy*times[i])/ans;
    }
    return ans;
}
