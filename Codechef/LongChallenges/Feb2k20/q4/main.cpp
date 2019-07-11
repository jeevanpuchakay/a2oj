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
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n,k;
        cin>>n>>k;
        vi denominations(n,0),track(n,0);ll flag=-1,lol=0;
        sfor(0,n,i){
            cin>>denominations[i];
            if(k%denominations[i]==0){
                track[i]=1;lol++;
            }
            //flag=(!(k%denominations[i]))?1:0;
        }
        vi feq(n,0);
        ll sum=k,maxDenom=n-1;
        while(sum>=denominations[0]&&maxDenom>=0){
            if(sum%denominations[maxDenom]!=0){
                //if(sum%denominations[maxDenom]>=denominations[0])
                feq[maxDenom]=sum/denominations[maxDenom]+1,sum=0;
                //else{

                //}
                //sum-=(sum%denominations[maxDenom]);
                maxDenom--;
            }
            else{
                feq[maxDenom]=sum/denominations[maxDenom]-1;
                sum-=(feq[maxDenom]*denominations[maxDenom]);
                maxDenom--;
            }
        }
        if(maxDenom<0){
            cout<<"NO"<<endl;continue;
        }
        else{
             cout<<"YES"<<endl;
            sfor(0,n,i)cout<<feq[i]<<" ";
            cout<<endl;
            continue;
        }
        

    }
    return 0;
}


/*

3
2 10
1 5
2 4
1 5
3 25
3 5 10

*/