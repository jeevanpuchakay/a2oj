#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int>> adjlist;
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
#define vi vector<int>
#define vc vector<char>
#define vinv vector<vector<int>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

int Solution::maxSubArray(const vector<int> &a)
{
    int n = a.size();
    int mas=INT_MIN;

    sfor(0,n,i){
        mas=max(a[i],mas);
    }
    if(mas<=0){
        return mas;
    }
    int sum=0,ans=0;
    sfor(0,n,i){
        sum+=a[i];
        if(sum<0)sum=0;
        ans=max(sum,ans);
    }

    return ans;

    
}
