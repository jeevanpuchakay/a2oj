#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
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

typedef long long int ll;
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

int findMedian(vector<vector<int> > &A) {

typedef long long int ll;
 ll n=A.size();
 ll m=A[0].size();
 ll count=0;
 ll median,temp=-1;
 ll start=0,end=1000000009;
 median=(start+end)/2;
 while(start<end){
     count=(n*m)/2;
     for(ll i=0;i<n;i++){
         for(ll j=0;j<m;j++){
             if(A[i][j]<median){
                 count--;
                 temp=A[i][j];
             }
         }
     }
     if(!count){
         if(temp!=median){
             start=temp;
         }else{
             break;
         }
     }else if(count<0){
         end=median;
     }else{
         start=median;
     }
 }


return median;

}
