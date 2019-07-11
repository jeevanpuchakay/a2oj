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




string Solution::longestCommonPrefix(vector<string> &a) {
    int n=a.sz;
    if(!n)return "";
    int pos=0,first=a[0].sz;int flag=0;
    while ((pos<first)&&flag)
    {
        /* code */
        sfor(0,n,i){
            if(a[i][pos]!=a[0][pos]){
                pos=pos-1;
                flag=1;
                break;
            }
    }
    }
    string s="";
    sfor(0,pos+1,i)s+=a[0][i];
    return s;
    
    
}
