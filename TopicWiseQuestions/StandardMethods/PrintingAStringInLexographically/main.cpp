#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))

ll n;
void PrintLexographily(string s,string res,ll level,vi feq){
    if(level==n)
    {
        cout<<res<<endl;
        return;
    }
    sfor(0,n,i){
        if(feq[s[i]-'a']==0)
        {
            continue;
        }
        feq[i]--;
        res[level]=s[i];
        PrintLexographily(s,res,level+1,feq);
        feq[i]++;
    }
}
int main()
{
    string s;
    cin>>s;
    n=s.size();
    vi feq(27);
    sort(s.bg,s.ed);
    sfor(0,n,i)
    feq[s[i]-'a']++;
    char res[n];
    PrintLexographily(s,res,0,feq);

    return 0;
}