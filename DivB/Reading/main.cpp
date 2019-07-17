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
int main()
{
    int n,k;
    cin>>n>>k;
    int times[n+1],temp[n+1];
    sfor(n)
    {
        cin>>times[i+1];
        temp[i+1]=times[i+1];
    }
    sort(temp,temp+n+1,greater<int>());
    int m=temp[k-1];
    cout<<m<<endl;
    for (int j = 1; j < n+1; ++j) {
        if(m<=times[j])
            cout<<j<<" ";
    }
    return 0;
}