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

 ll ansStart=-1,ansEnd=-1,ansSum=0;
    ll lol=-1,hut=-1,sum=0;
vector<int> Solution::maxset(vector<int> &a) {

   
    int flag=0;
    int n=a.size();
    sfor(0,n,i){
        if(a[i]>=0){
            flag=1;
            sum+=a[i];
            if(lol<0){
                lol=i;
                hut=i;
                ansStart=i;
                ansEnd=i;
            }else
            {
                
                hut++;
            }  
        }
        else{
            if(sum>ansSum){
                ansSum=sum;
                sum=0;
                ansStart=lol;
                ansEnd=hut;
                lol=hut=-1;
            }
            else if(sum==0&&ansSum==0){
                if(hut-lol>=ansEnd-ansStart){
                ansStart=lol;
                ansEnd=hut;}
            }
        }
    }
    vector<int> ans;
    if(!flag)
    return ans;
    sfor(ansStart,ansEnd+1,i){
        ans.pb(a[i]);
    }
    return ans;
}
