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
string add1(string l)
{
    ll a=l.size()-1;
    ll carry=1;
    while (carry)
    {
        carry=carry+l[a]-'0';
        l[a]='0'+carry%10;
        carry/=10;
        a--;
    }
    return l;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll nl,nr;
        string l,r;
        cin>>nl>>l;
        cin>>nr>>r;
        ll sum=0;
        while (l!=r)
        {
            ll n=l.size(),c=n-1;
            while (c)
            {
                    if(l[c-1]!=l[c])
                    {
                        ll z=pow(10,n-c-1);
                        sum+=(l[c]-'0')*z;
                        sum%=mod;
                    }
                    c--;
            }
                sum+=(l[0]-'0')*pow(10,n-1);sum%=mod;
            l=add1(l);
        }
        ll n=l.size()-2,c=n-1;
        while (c)
        {
            if(l[c-1]!=l[c])
            {
                sum+=(l[c]-'0')*pow(10,n-c-1);
                sum%=mod;
            }
            c--;
        }
        sum+=(l[0]-'0')*pow(10,n-1);sum%=mod;
        cout<<sum<<endl;
    }
    return 0;
}