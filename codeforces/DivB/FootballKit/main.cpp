#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int home[n],away[n],ans[n];
    for (int i = 0; i <n ; ++i) {
        ans[i]=0;
        cin>>home[i]>>away[i];
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i <n ; ++i) {
            if(away[j]==home[i])
                ans[j]++;
        }
        if(away[j]==home[j])
            ans[j]--;
        cout<<ans[j]<<" "<<n-ans[j]<<endl;
    }
}