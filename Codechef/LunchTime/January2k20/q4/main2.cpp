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
ll n,m;
vector<vector<vector<int>>> matrix;
vi mark;
void go(ll i1,ll i2){
    sfor(0,2,j){
        sfor(0,2,k){
            sfor(0,2,p)
            matrix[i1+i2][j][k]+=matrix[i1][j][p]*matrix[i2][p][k];
        }
    }
    return;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        cin>>n>>m;
        matrix=vector<vector<vector<int>>> (n+1,vector<vector<int>> (2,vector<int> (2,0)));
        matrix[1][0][0]=1,matrix[1][0][1]=m-1;
        matrix[1][01][0]=1,matrix[1][01][1]=0;
        mark=vi (n+1,0);
        mark[1]=1;
        sfor(01,sqrt(n)+1,i){
            if(2*i<=n){
                go(i,i);
            }
        }
    }
    return 0;
}
