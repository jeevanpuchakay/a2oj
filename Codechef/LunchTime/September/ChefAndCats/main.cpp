#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,ll>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,a=0,b,mi=0,c=0;
        cin>>n>>m;
        ll ord[n];
        sfor(i,n){
            ord[i]=0;
        }
        sfor(i,m){
            cin>>b;
            b--;
            if(!a){
             if(ord[b]==i/n){
                 ord[b]++;
             }
             else{
                 a=1;
                 //cout<<i;
             }
        }}
        a?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}
//7
//3 9
//1 2 3 1 2 3 1 2 3
//3 9
//1 2 3 3 2 1 1 2 3
//3 5
//2 3 1 1 2
//3 6
//2 1 1 3 2 3
//2 8
//1 2 1 2 1 2 1 1
//5 3
//5 3 1
//4 5
//1 2 3 1 4