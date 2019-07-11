#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
struct edge{
    ll v1,v2,w;
};
vector<edge> adjlist;//adjacency list
//vector<ll> result(100009);
vector<ll> minweit;
ll v,e,q;//number of vertices,edges,queries respectively
void mergestep(ll start,ll mid,ll end){
    ll n1=mid-start+1;
    ll n2=end-mid;
    vector<edge> temp1(n1),temp2(n2);
    for (ll i=0;i<n1;i++){
        temp1[i]=adjlist[i+start];
    }
    for (ll i=0;i<n2;i++){
        temp2[i]=adjlist[i+mid+1];
    }
    ll i=0,j=0,k=start;
    while(i<n1&&j<n2){
        if(temp1[i].w<temp2[i].w){
            adjlist[k]=temp1[i];
            i++;
        }
        else{
            adjlist[k]=temp2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        adjlist[k]=temp1[i];
        i++,k++;
    }
    while(j<n2){
        adjlist[k]=temp2[j];
        j++,k++;
    }
}
void mergesort(ll start,ll end){
    if(start<end){
        ll mid=(start+end)/2;
        mergesort(start,mid);
        mergesort(mid+1,end);
        mergestep(start,mid,end);
    }
}
ll parent[10009];
int check(int x,int y){
    while(x!=parent[x])
        x=parent[x];
    while (y!=parent[y])
        y=parent[y];
    return x!=y;
}
void addToMST(ll x,ll y){
    if(x<y)
    {
        ll t=x;
        while(t!=parent[t])
        {
            ll o=parent[t];
            parent[t]=parent[y];
            t=o;
        }
        parent[t]=parent[y];
        parent[x]=parent[y];
    }
    else
    {
        ll t=parent[y];
        while(t!=parent[t])
        {
            ll o=parent[t];
            parent[t]=parent[x];
            t=o;
        }
        parent[t]=parent[x];
        parent[y]=parent[x];
    }
    //cout<<"x "<<parent[x]<<" y"<<parent[y]<<endl;
    return;
}
ll minSpanTree(ll start){
    ll final=0;
    //ll start=0;
    ll weit=start?minweit[start-1]:0;
    for (int j = start; j <v ; ++j) {
        parent[j]=j;
       // cout<<parent[j]<<" ";
    }
    ll i;
    for(i=start;i<e&&final<v;i++){
        if(check(adjlist[i].v1,adjlist[i].v2))
        {
            //cout<<adjlist[i].v1<<" i j"<<adjlist[i].v2<<endl;
            addToMST(adjlist[i].v1,adjlist[i].v2);
            minweit[i]=weit+adjlist[i].w;
            weit=minweit[i];
            final++;
        }
        else{
            minweit[i]=minweit[i-1];
        }
    }

    return weit;
}
int main() {

    ll x,y,z;
    cin>>v>>e>>q;
    minweit=vector<ll>(e+q+9,0);
    for (ll i = 0; i < e; ++i) {
        cin>>x>>y>>z;
        edge ed;
        ed.v1=x,ed.v2=y,ed.w=z;
        adjlist.push_back(ed);
    }
    mergesort(0,e-1);
    cout<<minSpanTree(0)<<endl;

    for (ll j = 0; j <q ; ++j) {
        cin>>x>>y>>z;
        edge ed;e++;
        ed.v1=x,ed.v2=y,ed.w=z;
        ll start=0,end=adjlist.size()-1;
        while(start<end){
            ll mid=(start+end)/2;
            if(adjlist[mid].w>=z)
                end=mid;
            else
                start=mid+1;
        }
        while(start>=0&&adjlist[start-1].w==z)
            start--;
        start=start<0?0:start;
        if(adjlist[start].w<z)
        {
            adjlist.push_back(ed);
        }
        else
        adjlist.insert(adjlist.begin()+start,ed);
        //cout<<start<<" start "<<endl;
       // for(int i=0;i<e;i++){
         //   cout<<adjlist[i].v1<<" "<<adjlist[i].v2<<" "<<adjlist[i].w<<endl;
        //}
        //cout<<endl;
       //for(int p=0;p)
        cout<<minSpanTree(start)<<endl;
    }
    return 0;
}