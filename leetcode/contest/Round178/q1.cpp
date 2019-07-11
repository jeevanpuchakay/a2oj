class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        vector<pair<int,int>> a(n,{0,0});
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j])
                a[i].first++,a[i].second=i;
            }
        }
        sort(a.begin(),a.begin()+k);

        vector<int> ans;
        for(int i=0;i<k;i++)
            ans.push_back(a[i].second);
return ans;
    }
};

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
