//runtime error on test 2 


#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,i,n) for(ll i=a;i<n;i++)
#define mod 1000007
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
#define iset set<int>
#define bit(x,i) (x&(1<<i))
//7
//1 2
//2 3
//3 4
//4 5
//3 6
//6 7
int main()
{
    ll n,b,c;
    cin>>n;
    ll a[n+1][n+1],nofedg[n+1];
    memset(a,0,(n+1)*(n+1)*sizeof(ll));
    memset(nofedg,0, sizeof(nofedg));
    //cout<<a[1][2]<<" "<<endl;
    sfor(0,i,n-1){
        cin>>b>>c;
        a[b][c]=1;
        a[c][b]=1;
        nofedg[b]++;
        nofedg[c]++;
    }
    sfor(1,i,n+1)
    sfor(1,j,n+1)
    if(a[i][j]!=1)
        a[i][j]=mod;
    sfor(1,i,n+1){
        sfor(i+1,j,n+1){
            if(a[i][j]!=1&&i!=j){
                sfor(1,k,n+1){
                    if((a[i][j]>a[i][k]+a[k][j])&&(k!=j||i!=k)){
                        a[i][j]=a[i][k]+a[k][j];
                        a[j][i]=a[i][k]+a[k][j];
                    }
                }
            }
        }
    }
    c=0;
    sfor(1,k,n+1){
        c=k;
    sfor(1,i,n+1){
        sfor(i+1,j,n+1){
            if((k!=i||k!=j)&&(a[i][k]==a[j][k])){
                if((nofedg[i]==nofedg[j]))
                {
                    c=k;
                } else{
                    c=0;
                }
            }
            if(!c)
                break;
        }
        if(!c)
            break;
    }
    if(c)
        break;
    }
        c?cout<<c:cout<<-1;
   // cout<<endl;
    //cout<<a[4][2]<<" "<<a[1][2];
    return 0;
}
