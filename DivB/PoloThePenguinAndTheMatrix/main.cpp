#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
int main()
{
    int n,m,d;
    int a,b,steps=0;
    vi q;
    cin>>n>>m>>d;
    n*=m;
    cin>>a;
    q.pb(a);
    sfor(i,n-1)
    {
        cin>>b;
        if((a-b)%d!=0)
        {
            cout<<-1;
            return 0;
        }
        q.pb(b);
    }
    sort(q.bg,q.ed);
    int tot=q.size(),mid;
    mid=tot/2;
   /* if(tot%2)
    {
        mid=(q[tot/2-1]<q[tot/2])?tot/2-1:tot/2;
    }
    else
    {

    }*/
    sfor(i,n)
    {
        if(i<mid)
        {
            steps+=(q[mid]-q[i])/d;
        }
        else
        {
            steps+=(q[i]-q[mid])/d;
        }
    }
    cout<<steps;
    return 0;
}