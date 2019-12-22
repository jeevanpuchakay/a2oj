#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int n=ceil(log10(low)),m=ceil(log10(high));
        vector<int> ans;
        for(int i=1;i<=9;i++){
            int num=i,p=i+1;
            while(ceil(log10(num))<n&&p<=9)
            num*=10,num+=p,p++;
            while(p<=9&&ceil(log10(num))<=m){
                if(num<=high&&low<=num)
                ans.push_back(num);
                p++;
            }


        }
    }
};

int main()
{
    ll cases;
    cin>>cases;
    cout<<log10(cases);
    sfor(0,cases,t){
        
    }
    return 0;
}

