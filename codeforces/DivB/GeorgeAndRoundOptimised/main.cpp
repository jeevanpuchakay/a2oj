#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m,  b;
    cin >> n >> m;
    int a[n];
    for(int i = 1;i <= n;i++) cin >> a[i];
    int i, j;
    for(j = i = 1;i <= m;i++) {
        cin >> b;
        if (j <= n && b>= a[j])j++;
    }
    cout << n-j+1 << endl;
}