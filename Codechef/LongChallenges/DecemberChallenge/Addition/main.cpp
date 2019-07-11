#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
vc xorOperator(vc s1,vc s2){
    ll n1=s1.sz,n2=s2.sz;
    vc s;
    ll i=n1-1,j=n2-1;
    while(i>=0&&j>=0){
        if(s1[i]==s2[j])
        s.pb('0');
        else
        {
            s.pb('1');
        }
        i--,j--;
    }
    while(i>=0){
        s.pb(s1[i--]);
    }
    while(j>=0){
        s.pb(s2[j--]);
    }
    reverse(s.bg,s.ed);
    return s;
}
vc andOperator(vc s1,vc s2){
    ll n1=s1.sz,n2=s2.sz;
    vc s;
    ll i=n1-1,j=n2-1;
    while(i>=0&&j>=0){
        if(s1[i]=='0'||s2[j]=='0')
        {s.pb('0');}
        else
        {
            s.pb('1');
        }
        i--,j--;
    }
       reverse(s.bg,s.ed);

    return s;

}
int check(vc s){
    ll n=s.sz;
    sfor(0,n,i){
        if(s[i]=='1')
        return 1;
    }
    return 0;
}
int main()
{
    ll cases;
    cin>>cases;
    //cout<<endl;
    sfor(0,cases,t){
        string s1,s2;
        cin>>s1>>s2;
        ll n1=s1.sz,n2=s2.sz;
        vc a,b;
        sfor(0,n1,i)
        a.pb(s1[i]);

        sfor(0,n2,i)
        b.pb(s2[i]);

        vc t1,t2;
        ll ans=0;
        while(check(b)){
            t1=xorOperator(a,b);
            t2=andOperator(a,b);
            a=t1;
            t2.pb('0');
            b=t2;
           // for(auto z=a.bg;z!=a.ed;z++)
            //cout<<*z;
            //cout<<endl;
            //for(auto z=b.bg;z!=b.ed;z++)
            //cout<<*z;
            //cout<<endl;
            ans++;
            //cout<<s1<<" "<<s2<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*

3
100010
0
0
100010
11100
1010

*/
