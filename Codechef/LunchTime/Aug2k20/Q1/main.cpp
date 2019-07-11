#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool notPossible;
    long n, t, k, x, ans, sum;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        notPossible = false;
        x = 0, ans = 1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (notPossible)
                continue;
            if (x > k)
                notPossible = true;
            if (sum + x > k)
            {
                ans++;
                sum = x;
            }
            else
                sum += x;
        }
        if (notPossible)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}