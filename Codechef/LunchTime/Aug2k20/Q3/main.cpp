#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, k, t, ones, zeros, bLen;
    string s, ans, base, rBase;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        ones = zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
            else
                zeros++;
        }
        ans = "";
        base = "";
        rBase = "";
        bLen = n / k;
        if (((ones % bLen == 0) && (zeros % bLen == 0)) == false)
        {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        for (int i = 0; i < (zeros / bLen); i++)
            rBase += '0';
        for (int i = 0; i < (ones / bLen); i++)
            rBase += '1';
        base = rBase;
        reverse(rBase.begin(), rBase.end());
        for (int i = 0; i < bLen; i++)
        {
            ans += (i % 2 == 0 ? base : rBase);
        }
        cout << ans << endl;
    }
}

