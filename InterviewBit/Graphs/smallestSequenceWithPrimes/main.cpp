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
int main()
{
}

vector<int> Solution::solve(int a, int b, int c, int d)
{

    set<ll> track;
    vector<int> ans;
    track.insert(a);

    track.insert(b);
    track.insert(c);

    while (ans.sz < d)
    {
        auto fist = track.begin();
        ans.pb(*fist);
        track.erase(fist);
        track.insert((*fist) * a);
        track.insert((*fist) * b);
        track.insert((*fist) * c);
    }
    return ans;
}



class Solution:
# @param A : integer
# @param B : integer
# @param C : integer
# @param D : integer
# @return a list of integers
def solve(self, A, B, C, D):
    x=0
    y=0
    z=0
    k=D
    ans=[0]*(k+1)
    ans[0]=1
    for i in range(1,k+1):
        temp=min(A*ans[x],B*ans[y],C*ans[z])
        ans[i]=temp
        if temp==A*ans[x]:
            x+=1
        if temp==B*ans[y]:
            y+=1
        if temp==C*ans[z]:
            z+=1
    return ans[1:]