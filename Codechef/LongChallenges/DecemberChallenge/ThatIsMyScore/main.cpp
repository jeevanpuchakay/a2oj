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
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi a(10,0);
        ll questionNumber,score;
        sfor(0,n,i)
        {
            cin>>questionNumber>>score;
            if(questionNumber<=8)
            a[questionNumber]=max(a[questionNumber],score);
        }
        ll sum=0;
        sfor(1,9,i)
        sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}

