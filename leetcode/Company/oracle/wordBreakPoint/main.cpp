

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
//#define imap map<ll,ll>
//#define cmap map<char,ll>
//#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> dictio;
        for(auto z=wordDict.begin();z!=wordDict.end();z++){
            dictio[*z]=1;
        }
        int n=s.size();
        int answer[n][n];
        memset(answer,0,n*n*sizeof(int));
        for(int i=0;i<n;i++){
             string q="";
            q+=s[i];
            if(dictio[q])
            {
                answer[i][i]=1;
            }
        }
        for(int sw=2;sw<=n;sw++){
            for(int i=0;i<=n-sw;i++){
                string temp=s.substr(i,sw);
                if(dictio[temp])
                {
                    answer[i][i+sw-1]=1;
                    continue;
                }
                for(int j=i;j<i+sw;j++){
                    if(answer[i][j]&&answer[j+1][i+sw-1]){
                        answer[i][i+sw-1]=1;
                        break;
                    }
                }

            }
        }
        return answer[0][n-1]?true:false;
    }
};
