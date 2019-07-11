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
string add(string a,string b)
{
    string result="";
    int sum=0;
    int i=a.size()-1,j=b.size()-1;
    while (i>=0||j>=0||sum>0)
    {
        i>=0?sum+=a[i]-'0':0;
        j>=0?sum+=b[j]-'0':0;
        result=char(sum%2+'0')+result;
        sum/=2;
        i--;j--;
    }
    return result;
}
int multiply(string a,string b,ll c)
{
    /*int n=a.size();
    string q="";
    q+='1';
    sfor(c)
    {
        q+='0';
    }
    string product="";
    sfor(n)
    {
        if(q[i]=='1')
        {
            product=add(product,b+'0');
        }
        else
        {
            product=add(product,b);
        }
    }*/
   if(c>0)
       b+='0';
    string dum=b;
    sfor(c)
    {
        b=add(b,dum);
    }
    b=add(b,a);
    int q=b.size();
    cout<<c<<" "<<b<<endl;
    if(b[0]!='1')
        return 0;
    sfor(q)
    {
        if(b[i+1]=='1')
            return 0;
    }
    return 1;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        ll k=0;
        while(k>=0)
        {
            if(multiply(a,b,k))
            {
                cout<<k<<endl;
                break;
            }
            k++;
        }}
    return 0;
}
//4
//1010
//11
//10001
//110
//1
//1
//1010101010101
//11110000