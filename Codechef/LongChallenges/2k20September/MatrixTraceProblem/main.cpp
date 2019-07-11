#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
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
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)

int main()
{
    ll ans, cases, n;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        int matrix[n][n];
        ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        for(int i=n-1;i>=0;i--){
            if(ans%2==0){
                if(matrix[i][0]!=(i*n+1))ans++;
            }else{
                if(matrix[i][0]==(i*n+1))ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}