#include <iostream>
#include <queue>
using namespace std;
typedef long long int ll;
ll mas=1e9+7;
ll n;
ll leas(ll mark[],ll dis[]){
    ll ans=mas,inde=0;
    for(ll i=0;i<n;i++){
        if(!mark[i]&&(dis[i]<ans)){
            inde=i,ans=dis[i];
        }
    }
    return inde;
}
int main(){
    cin>>n;//number of vertices
    ll adjmat[n][n],mark[n];
    for (ll j = 0; j <n ; ++j) {
        for (ll i = 0; i < n; ++i) {
            adjmat[j][i]=0;
        }
        mark[j]=0;
    }
    ll m;
    cin>>m;
    ll x,y,w;
    for(ll i=0;i<m;i++){
        cin>>x>>y>>w;//x--,y--;
        adjmat[x][y]=w;
        adjmat[y][x]=w;
    }
    ll s;
    cin>>s;
    ll dis[n];
    for(ll i=0;i<n;i++)
        dis[i]=mas;
    dis[s]=0;
    //shortest distance from 0
    queue<ll> q;
    q.push(s);
    while (!q.empty()){
        ll a=q.front();
        q.pop();
        mark[a]=1;
        for (ll i = 0; i <n; ++i) {
            if(adjmat[a][i]&&(!mark[i])){
                if(dis[a]+adjmat[a][i]<dis[i]){
                    dis[i]=dis[a]+adjmat[a][i];
                }
            }
        }
        ll tem=leas(mark,dis);//Vertex with least distance which is not visited
        if(tem)
        q.push(tem);
    }
    //cout<<dis[t]<<endl;
    for(int i=0;i<n;i++)
    cout<<dis[i]<<" ";
}


