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
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
string inp;
int main()
{
    cin>>inp;
    int a=0,b=0;
    vector<char> ans;
    if(inp[0]=='-')
    {
        a++;
        ans.pb('(');
    }
    ans.pb('$');
    int n=inp.size();
    for (int i = a; i <n ; ++i) {
        if(inp[i]=='.')
        {
            ans.pb('.');
            if(n-i-1==1)
            {i++;
                ans.pb(inp[i]);
                ans.pb('0');
                break;
            } else{
                i++;
                for (int j = 0; j < 2; ++j)
                    ans.pb(inp[i+j]);
            }
            break;
        }
        else{
            ans.pb(inp[i]);
        }
    }
    n=ans.size();
    if(ans[n-3]!='.')
    {
        ans.pb('.');
        for (int j = 0; j < 2; ++j)
            ans.pb('0');
    }
    if(ans[0]=='(')
        ans.pb(')');
    b=0;
    if(a)b=2;
    n=ans.size();
    if(n-b-4>3)
    {
        b=(n-b-4)%3;
    }
    sfor(n)
    {
        cout<<ans[i];
        if((i-a)%3==b&&(i-a)>0&&(i)<=n-a-6)
            cout<<",";
    }
    return 0;
}