#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
#define max(x,y) (x>y)?x:y
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
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
map<string,pair<ll,ll> > timeLine;
ll n;
string substract(string s,char k){
    int key=k-'0';
    ll i=n-1;
    while(key){
        if(key>s[i]-'0'){
            s[i]=(10+s[i]-key);
            key=1;
        }
        else
        {
            s[i]=s[i]-key;
            key=0;
        }
        
    }
    return s;
}
pair<ll,ll> go(string s,ll moves){
    pair<ll,ll> &trans=timeLine[s];
    if(trans.second==0){
        ll i=0;
        while (i<n&&s[i]!='0')
        {
            /* code */
            i++;
        }
        if(i==n-1)
        {
            trans.second=1;
            trans.first=moves+1;
        }
        else if(i==n)
        {
            trans.second=1;
            trans.first=moves;
        }
        else
        {
            sfor(i,n,j){
            string temp=substract(s,s[j]);
            trans=go(temp,moves+1);
            if(trans.second)
            {
                break;
            }
        }
        }
    }
    return trans;
}
int main()
{
    string s;
    cin>>s;
    n=s.sz;
    pair<ll,ll> ans=go(s,0);

    return 0;
}

