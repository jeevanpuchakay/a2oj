#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,kill=0;
    cin>>n>>m;
    string pat[n];
    for (int i = 0; i < n; ++i) {
        cin>>pat[i];
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i <m ; ++i) {
            if(pat[k][i]=='P')
            {
                if(i&&(pat[k][i-1]=='W'))
                {
                    pat[k][i]='.';
                    pat[k][i-1]='.';
                    kill++;
                    continue;
                } else if((i!=m-1)&&(pat[k][i+1]=='W'))
                {
                    pat[k][i+1]='.';
                    pat[k][i]='.';
                    kill++;
                    continue;
                } else if(k&&(pat[k-1][i]=='W'))
                {
                    pat[k-1][i]='.';
                    pat[k][i]='.';
                    kill++;
                    continue;
                } else if((k!=n-1)&&(pat[k+1][i]=='W'))
                {
                    pat[k+1][i]='.';
                    pat[k][i]='.';
                    kill++;
                    continue;
                }
            }
        }
    }
    cout<<kill;
    return 0;
}
/* for (int j = 0; j <m ; ++j) {
            if(pat[i][j]=='P')
                kill++;
        }
        */