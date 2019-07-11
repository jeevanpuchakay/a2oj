#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    sfor(n)
    cin>>a[i];
    ll c1=0,c2=0,bal=0;
    ll ansp=0;
    sfor(n){
        if(a[i]<0){
            bal++;
        }
        if(bal%2){
            c1++;
           // ansp+=c1;
            //cout<<i<<" a";
        } else{
            c2++;
        //ansp+=c2;
        //cout<<i<<" b";
        }
        if(bal%2){
            ansp+=c1;
        } else{
            ansp+=c2;
        }
    }
    cout<<(n*(n+1))/2-ansp<<" "<<ansp;
}
