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
typedef long double ld;
typedef long long int ll;
int ans[3],n;
map<string ,int[3]> lis;
int incr(string dum)
{
    char las=dum[0];
    for(int i=01;i<dum.size();i++)
    {
        if(dum[i]!='-')
        {
            if(las<=dum[i])
                return 0;
            las=dum[i];
        }

    }
    return 1;
}
int sam(string dum)
{
    set<char> a(begin(dum),end(dum));
    if(a.size()==2)
        return 1;
    return 0;
}
void taxi(string given[])
{
    vector<string> vs;
    for (int i = 0; i < n; ++i) {
        if(lis[given[i]][1]==ans[1])
            vs.pb(given[i]);
    }
    for (auto j=vs.bg;j!=vs.ed;++j) {
        cout<<*j;
        j+1==vs.ed?cout<<".":cout<<", ";
    }
    return;
}
void pizza(string given[])
{
    vector<string> vs;
    for (int i = 0; i < n; ++i) {
        if(lis[given[i]][0]==ans[0])
            vs.pb(given[i]);
    }
    for (auto j=vs.bg;j!=vs.ed;++j) {
        cout<<*j;
        j+1==vs.ed?cout<<".":cout<<", ";
    }
    return;
}
void girl(string given[])
{
    vector<string> vs;
    for (int i = 0; i < n; ++i) {
        if(lis[given[i]][2]==ans[2])
            vs.pb(given[i]);
    }
    for (auto j=vs.bg;j!=vs.ed;++j) {
        cout<<*j;
        j+1==vs.ed?cout<<".":cout<<", ";
    }
    return;
}
int main()
{
    int s;
    cin>>n;
    string given[n];
    string st,dum;
    //0 incr
    //1 taxi
    //2 girls
    cin >> s >> st;
    given[0]=st;
    sfor(s)
    {
        cin>>dum;
        if(incr(dum))
            lis[st][0]++;
        else if(sam(dum))
            lis[st][1]++;
        else
            lis[st][2]++;
    ans[0]=lis[st][0];
    ans[1]=lis[st][1];
    ans[2]=lis[st][2];
    }
    for(int j=1;j<n;j++) {
        cin >> s >> st;
        given[j]=st;
        sfor(s)
        {
            cin>>dum;
            if(incr(dum))
                lis[st][0]++;
            else if(sam(dum))
                lis[st][1]++;
            else
                lis[st][2]++;
        }
        if(ans[0]<lis[st][0])
            ans[0]=lis[st][0];
        if(ans[1]<lis[st][1])
            ans[1]=lis[st][1];
        if(ans[2]<lis[st][2])
            ans[2]=lis[st][2];
    }
    cout<<"If you want to call a taxi, you should call: ";taxi(given);cout<<endl;
    cout<< "If you want to order a pizza, you should call: ";pizza(given);cout<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";girl(given);cout<<endl;
    return 0;
}