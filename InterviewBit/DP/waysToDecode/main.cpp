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

string s;



vi ans;

ll n;int flag=0;
int go(ll i){
    if(i<=0)return 01;
    if(ans[i]>=0)return ans[i];
    if((i>0)&&((s[i-1]-'0')*10+(s[i]-'0'))<27){
        if(s[i]=='0'){
             ans[i]=go(i-2); 
        }else if(s[i-1]=='0'){
             ans[i]=go(i-3); 
        }else{
             ans[i]=go(i-1)+go(i-2); 
        }
       return ans[i];
    }
    else if(s[i]>'0'){
        ans[i]=go(i-1); return ans[i];
    }
    else {
        flag=1;
     //   cout<<i<<" i "<<endl;
        ans[i]=0; return ans[i];
    }
   
}

int Solution::numDecodings(string a) {
    s=a;
    n=s.sz;
    if((n==1)){
    if(a[0]!='0')return 1;
        else{
            return 0;
        }
    }
    ans=vi(n,-1);
    if(a[0]!='0'){
        ans[0]=1;
    }else return 0;
   ans[n-1]=go(n-1);
    if(flag)return 0;
    return ans[n-1];
}
