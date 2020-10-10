#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    string s="";
    if(n>m+1||m>2*n+2)
    {
        cout<<-1;
        return 0;
    }
    int c=1;
    if(n<=m/2+1)
    {s+='1';
    m--;}
    else
    {
        s+='0';
        c=0;
        n--;
    }
    while(n>0||m>0)
    {
        if(n>m||2*n+2<m-1||c==2)
        {
            s+='0';
            c=0;
            n--;
        }
        else
        {
            s+='1';
            c++;
            m--;
        }
    }
    cout<<s;
    return 0;
}