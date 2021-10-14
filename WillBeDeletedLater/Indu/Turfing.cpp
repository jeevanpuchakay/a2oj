#include <bits/stdc++.h>
using namespace std;

void solveCase()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int ans = 0, currTurf = -1, maxTurf = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
        }
        else
        {
            if (currTurf < i)
            {
                currTurf = i + k - 1;
                maxTurf = currTurf;
                ans++;
            }
            else
            {
                maxTurf = max(maxTurf, i + k - 1);
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    solveCase();
    return 0;
}