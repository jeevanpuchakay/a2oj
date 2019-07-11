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
int palindrome(ll n)
{
    vi a,b;
    while (n)
    {
        a.pb(n%10);
        n/=10;
    }
    b=a;
    reverse(a.bg,a.ed);
    if(a==b)
        return 1;
    return 0;
}
int main()
{
    ll c=0;
    for (int i = 999; i >99 ; --i) {
        for (int j = 999; j >99 ; --j) {
            if((c<i*j)&&palindrome(i*j))
            {
                c=i*j;
            }
        }
    }
    cout<<c;
    return 0;
}