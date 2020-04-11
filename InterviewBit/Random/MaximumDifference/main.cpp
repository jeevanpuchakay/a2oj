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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))


int Solution::solve(vector<int> &a, int b) {
    int n=a.sz;
    sort(a.bg,a.ed);
    int sum=0,sumK=0,sumNK=0;
    sfor(0,n,i){
        if(i<k){
            sumk+=a[i];
        }
        if(i<n-k){
            sumNK+=a[i];
        }
        sum+=a[i];
    }
    return abs(max(abs(sum-2*sumK),abs(sum-2*sumNK)));
}
