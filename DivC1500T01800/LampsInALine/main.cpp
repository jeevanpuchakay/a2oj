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
    ll n;
    string s;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++){
        cin>>s;
        if(s=="on"){
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    ll k,b;
    cin>>k;
    for(ll i=0;i<k;i++){
        cin>>b;
        for(ll j=0;j<n;j++){
            if((j+1)%b!=0){
                a[j]=!a[j];
            }
        }
    }
    for (ll l = 0; l <n ; ++l) {
        if(a[l]){
            cout<<"on"<<" ";
        }
        else{
            cout<<"off"<<" ";
        }
    }
    return 0;
}