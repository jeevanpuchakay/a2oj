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
string addUp(string a,string b){
    ll n=a.sz,m=b.sz;

    ll c=0;
   
    string ans="";
    ll i=0,j=0;
    while(j<m){
        c+=a[i]-'0'+b[j]-'0';
        ans+=((c%10)+'0');
        c/=10;
        i++,j++;
    }
     while((i<n)){
        c+=a[i]-'0';
        ans+=((c%10)+'0');
        c/=10;
        i++;
    }
    while(c){
        ans+=((c%10)+'0');
        c/=10;
    }
    reverse(ans.bg,ans.ed);
    return ans;
}
string solve(string &a,string &b){
    ll n=a.sz,m=b.sz;
    ll inA=-1,inB=0;
     reverse(a.bg,a.ed);
    reverse(b.bg,b.ed);
  while(inB<m){
      for(ll i=n-1;i>inB;i--){
          if(a[i]<b[inB]){
              inA=i;break;
          }
      }
      if(inA>0)break;
      inB++;
  }
    if(inA>0){
        swap(a[inA],b[inB]);
    }
   // cout<<"a "<<a<<" b "<<b<<endl;
    return addUp(a,b);
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        string a,b;
        cin>>a>>b;
        //cout<<endl;
        if(a.sz<b.sz)
        swap(a,b);
        cout<<solve(a,b)<<endl;
    }
    return 0;
}
