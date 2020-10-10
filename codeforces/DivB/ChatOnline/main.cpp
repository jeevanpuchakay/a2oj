#include<bits/stdc++.h>
using namespace std;
//contains a bug
typedef long long int ll;
int main()
{
    int p,q,count=0;
    int l1,l2;
    cin>>p>>q>>l1>>l2;
    int z[p][2],x[q][2];
    for (int i = 0; i < p; ++i) {
        cin>>z[i][0]>>z[i][1];
    }
    for (int j = 0; j < q; ++j) {
        cin>>x[j][0]>>x[j][1];
    }
    for (int k = l1; k <=l2 ; ++k) {
        for (int i = 0; i <p ; ++i) {
            int prev =count;
            for (int j = 0; j <q ; ++j) {
                int a=(x[j][0]+k<=z[i][1]&&x[j][0]+k>=z[i][0]);
                int b=(x[j][1]+k<=z[i][1]&&x[j][1]+k>=z[i][0]);
                int c=(z[i][0]<=x[j][0]+k&&x[j][1]+k<=z[i][1]);
                if(a||b||c)
                {
                    count++;
                    break;
                }
            }
            if(count!=prev)
            {
                break;
            }
        }
    }
    cout<<count;
    return 0;
}

