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
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numberOfrows=matrix.size();
        int numberOfCols;
        if(numberOfrows)
        numberOfCols=matrix[0].size();
        else
        {
            return;
        }
        //pair<int,int> 
        vector<int> col(numberOfCols,0);
        vector<int> rows(numberOfrows,0);
        for(int i=0;i<numberOfrows;i++){
            //if(!rows[i])
            for(int j=0;j<numberOfCols;j++){
                //if(col[j]==0)
                 //{
                     if(matrix[i][j]==0){
                     rows[i]=1;
                     col[j]=1;
                     //break;
                 }
                 
                 //}
            }
        }

        for(int i=0;i<numberOfrows;i++){
            //if(rows[i])
            for(int j=0;j<numberOfCols;j++){
                if(rows[i]||col[j])
                matrix[i][j]=0;
                 //}
            }
        }
    }
};