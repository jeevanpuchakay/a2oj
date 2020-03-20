#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

void rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    if(!n)return;
    int m=A[0].size();
    if(!m)return;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<=(n-i)/2;j++){
            int last=n-j-1;
            swap(A[i][j],A[i][last]);
            swap(A[i][j],A[n-i-1][last]);
            swap(A[i][j],A[n-i-1][j]);
        }
    }
    return;
}

int main()
{
    int cases=1;
    cout<<1<<endl;
    vector<vector<int> > A(3,vector<int>(3,0));
    sfor(0,3,i){
        sfor(0,3,j){
            A[i][j]=(cases++);
        }
    }
        cout<<2<<endl;

    rotate(A);
        cout<<3<<endl;

     sfor(0,3,i){
        sfor(0,3,j){
           cout<< A[i][j]<<" ";//=(cases++);
        }
        cout<<endl;
    }
    return 0;
}