#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> ladjlist;
ll lmax(ll x, ll y) { return (x > y) ? x : y; }
ll lmin(ll x, ll y) { return (x > y) ? y : x; }


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount=0,n=arr.size(),last=0;
        for(int i=0;i<n;i++){
            if((missingCount+(arr[i]-last-1))<k){
                missingCount+=(arr[i]-last-1);
            }else{
                return (last+k-missingCount);
            }
            last=arr[i];
        }
        return (last+k-missingCount);
    }
};