#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)

class comp{
    public:
    bool operator()(int a,int b){
        return b>a;
    }
};

int main()
{
    ll cases,n,pos;
    cin>>cases;
    sfor(0,cases,t){
        cin>>n;
        int arr[n],locked[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>locked[i];
        }
        priority_queue<int,vector<int>,comp> pq;
        
        for(int i=0;i<n;i++)
        {
            if(locked[i]==0){
                pq.push(arr[i]);
            }
        }
        pos=0;
        while (pq.empty()==false)
        {
            /* code */
            while (pos<n&&locked[pos]==1)
            {
                pos++;
                /* code */
            }
            if(pos<n){
                arr[pos++]=pq.top();
                pq.pop();
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}