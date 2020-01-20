#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
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
#define vinv vector<vector<ll,ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    
    return 0;
}

class Solution {
public:
vector<int> track;
int go(int n){
    for(int i=1;i<n;i++){
        if(n%i==0){
            int &wtf=track[n-i];
            if(wtf==-1){
                wtf=go(n-i);
            }
            if(wtf==0)
            return 1;
        }
    }
    return 0;
}
    bool divisorGame(int N) {
        track=vector<int> (N+1,-1);
        track[N]=go(N);
        return track[N]?true:false;
    }
};
