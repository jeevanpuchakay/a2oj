#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define sfor(a, n, i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x, i) (x&(1<<i))

int main() {
    ll n, m, x, y;
    cin >> n >> m;
    int a[n + 1][n + 1];
    imap edg;
    memset(a, 0, sizeof(int));
    sfor(0, m, i) {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
        edg[x]++;
        edg[y]++;

    }
    sfor(1, n+1, i)if (edg[i]<=1) {
            cout << -1<<"a"<<i;
            return 0;
        }
        ll i;
    for(i=1;i<n;i++) {
        sfor(i + 1, n - 1, j) {
            if (a[i][j]) {
                x = j;
            }
            if (x)
                sfor(1, n + 1, j) {
                    if ((j != x) && (j != i) && a[x][j] && a[i][j]) {
                        y = j;
                        break;
                    }
                }
            if (x && y)
                x = y = 0;
        }
        if(x&&y)
            break;
    }
    if(i==n)
    {
        cout << -1<<"b";
        return 0;
    }
    int r[n+1];
    memset(r,0,sizeof(int));
    r[i]=1,r[x]=2,r[y]=3;
    sfor(1,n+1,j){
        if((!r[j]))
        {
            if(a[i][j])
            {
                if(a[x][j])
                {
                    if(a[y][j])
                    {
                        cout << -1<<"c";
                        return 0;
                    } else
                        r[j]=3;
                }
                else if(a[y][j]){
                    r[j]=1;
                }
            }
            else if(a[x][j]){
                if(a[y][j]){
                    cout << -1<<"d";
                    return 0;
                }
                else {
                    r[j]=2;
                }
            }
            else if(a[y][j]){
                r[j]=1;
            }
        }
    }
    sfor(1,n+1,j)
    cout<<r[j]<<" ";
    return 0;
}
