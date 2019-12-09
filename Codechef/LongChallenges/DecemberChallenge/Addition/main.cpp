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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
string xorOperator(string s1,string s2){
    ll n1=s1.sz,n2=s2.sz;
    string s="";
    ll i=n1-1,j=n2-1;
    while(i>=0&&j>=0){
        if(s1[i]==s2[j])
        s=s+'0';
        else
        {
            s=s+'1';
        }
        i--,j--;
    }
    while(i>=0){
        s=s1[i--]+s;
    }
    while(j>=0){
        s=s2[j--]+s;
    }
    return s;
}
string andOperator(string s1,string s2){
    ll n1=s1.sz,n2=s2.sz;
    string s="";
    ll i=n1-1,j=n2-1;
    while(i>=0&&j>=0){
        if(s1[i]=='0'||s2[j]=='0')
        {s='0'+s;}
        else
        {
            s='1'+s;
        }
        i--,j--;
    }
   
    return s;

}
int check(string s){
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
        string t1="",t2="";
        ll ans=0;
        while(check(s2)){
            t1=xorOperator(s1,s2);
            t2=andOperator(s1,s2);
            s1=t1;
            s2=t2+'0';
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
