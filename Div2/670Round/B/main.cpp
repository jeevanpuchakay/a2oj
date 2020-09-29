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
int x, n;

void buildTree(int arr[], int segtree[], int start, int end, int pos)
{
    if (start == end)
    {
        segtree[pos] = arr[start];
        return;
    }
    int mid = start + (end - start) / 2;
    buildTree(arr, segtree, start, mid, 2 * pos + 1);
    buildTree(arr, segtree, mid + 1, end, 2 * pos + 2);
    segtree[pos] = segtree[2 * pos + 1] + segtree[2 * pos + 2];
    return;
}
// int[] buildSegTre
int sum(int segtree[], int start, int end, int left, int right, int pos)
{
    if (end < left || start > right)
    {
        return 0;
    }
    else if (left <= start && end <= right)
    {
        return segtree[pos];
    }
    int mid = start + (end - start) / 2;
    return sum(segtree, start, mid, left, right, 2 * pos + 1) + sum(segtree, mid + 1, end, left, right, 2 * pos + 2);
}

void update(int arr[], int segtree[], int start,int end,int pos,int target)
{
    if(start>target||end<target)return;
    if (start == end)
    {
        segtree[pos] = arr[target];
        return;
    }
    int mid = start + (end - start) / 2;
    update(arr,segtree,start,mid,2*pos+1,target);
    update(arr,segtree,mid+1,end,2*pos+2,target);
    segtree[pos] = segtree[2 * pos + 1] + segtree[2 * pos + 2];
    return;
}
int main()
{
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if ((n & (n - 1)) == 0)
        x = 2 * n - 1;
    else
    {
        x = ceil(log2(n));
        x = pow(2, x + 1);
        x--;
    }
    int segtree[x],left,right;
    buildTree(arr, segtree, 0, n - 1, 0);
    char q;
    for(int i=0;i<5;i++){
        cin>>q;
        if(q=='s'){
            cin>>left>>right;
            cout<<sum(segtree,0,n-1,left,right,0)<<endl;
        }else{
            cin>>left>>right;
            arr[left]=right;
            update(arr,segtree,0,n-1,0,left);
        }
    }
    return 0;
}

// 4 0 1 2 3 
// s 0 2 s 0 1
// u 0 10 s 0 3