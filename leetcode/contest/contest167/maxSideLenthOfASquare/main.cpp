#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))

class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m=mat.size();//rows
        int n=mat[0].size();//cols
        if(n==1){
            for(int i=0;i<m;i++)
            if(mat[i][0]<=threshold)
            return 1;
            return 0;
        }
        if(m==1){
            for(int i=0;i<n;i++)
            if(mat[0][i]<=threshold)
            return 1;
            return 0;
        }
        int copy[m][n];
        int ans=0;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        copy[i][j]=0;
        int temp=0;
        for(int i=0;i<m;i++){ 
            for(int j=0;j<n;j++){
                int d=i+1,r=j+1;
                temp=mat[d][r];
            while(temp<threshold&&(d<m)&&(r<n)){
                for(int p=i;p<=d;p++){
                    temp+=mat[p][r];
                }
                for(int p=j;p<r;p++)
                temp+=mat[d][p];

                d++,r++;
            }
                if(temp>threshold)
                d--,r--;
                ans=(d-i+1)>ans?(d-i+1):ans;
            }
        }
    }
};


int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

