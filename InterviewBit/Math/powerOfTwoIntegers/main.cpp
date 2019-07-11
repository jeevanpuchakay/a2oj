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


int Solution::isPower(int a) {

    if((a&(a-1))==0)return 1;
    int sq=ceil(sqrt(a));
    sfor(3,sq+1,i){
        if((i&(i-1))){
            int present=i
            track[1]=i;
            while((present*present<a)||(present*i<a)){
                if(present*present<a){
                    present*=present;
                }
                else{
                    present*=i;
                }
            }
            if((present*present==a)||(present*i==a)||(present==a)){
                return 1;
            }
        }
    }
    return 0;
}
