int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int n=A.size();
    if(n==0)
    return 0;
    int m=A[0].size();
    if(m==0)return 0;
    vector<vector<int>> b(n,vector<int>(m,0));
    if(A[0][0]==0)
    b[0][0]=1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0){
                if(i&&A[i-1][j]==0)
                b[i][j]+=b[i-1][j];
                if(j&&A[i][j-1]==0)
                b[i][j]+=b[i][j-1];
            }
        }
    }
    return b[n-1][m-1];
}
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

    }
    return 0;
}