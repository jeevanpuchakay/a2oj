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
    ll n,count=0;
    cin>>n;
    string s[n];
    smap feq;
    sfor(n)
    {
        cin>>s[i];
        for (ll j = 0; j <10 ; ++j) {
           feq[s[i]]^=int(s[i][j]);
        }
        for (ll j = 0; j <i ; ++j) {
            if(feq[s[i]]==feq[s[j]])
                count++;
        }
    }
    cout<<count;
    return 0;
}