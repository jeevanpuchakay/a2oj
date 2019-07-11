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
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        
    }
    return 0;
}


class Solution {
public:
int p;
int go(int start,int end,int target,vector<int>& nums){
    if(start==end){
        if(nums[start]==target)
        return start;
        else if(nums[start]>target){
            return go(end,(start+p)%p,target,nums);
        }
        else{
            
        }
    }
}
    int search(vector<int>& nums, int target) {
        p=nums.size();
        if(!p)
        return -1;
        return go(0,p-1,target,nums);
    }
};