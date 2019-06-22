#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;
map<int ,int >mpp;
int main()
{
    cin>>n;
    int arr[n],brr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr,brr+n);
    for (int j = 0; j <n ; ++j) {
        mpp[brr[j]]=j;
    }
    for (int k = 0; k <n ; ++k) {
        arr[k]=mpp[arr[k]];
    }
    int l=-1,r=-1;
    for (int m = 0; m <n ; ++m) {
        if(arr[m]!=m)
        {
            l=m;
            break;
        }
    }
    for (int i1 = n-1; i1>=0 ; --i1) {
        if(arr[i1]!=i1)
        {
            r=i1;
            break;
        }
    }
    if(l==-1&&r==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        reverse(arr+l,arr+r+1);
        int b=1;
        for (int i = 0; i <n ; ++i) {
            if(arr[i]!=i)
                b=0;
        }
        if (b) {
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}