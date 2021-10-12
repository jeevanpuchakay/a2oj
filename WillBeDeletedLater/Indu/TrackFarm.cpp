#include <bits/stdc++.h>
using namespace std;
void printStandardLine(int n)
{
    cout << "+";
    for (int i = 1; i < (2 * n + 2); i++)
    {
        cout << "-";
    }
    cout << "\n";
}
void solve()
{
    int n;
    cin >> n;
    int a[n], maxA = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxA = max(maxA, a[i]);
    }
    printStandardLine(n);
    for (int lineNo = 2; lineNo <= (maxA + 2); lineNo++)
    {
        cout << "|";
        for (int charNo = 2; charNo <= (2 * n + 2); charNo++)
        {
            if ((charNo & 1) == 0)
            {
                cout << ".";
            }
            else
            {
                int i = (charNo - 1) / 2 - 1;
                if (lineNo <= a[i])
                {
                    cout << "X";
                }
                else if (lineNo == (a[i] + 1))
                {
                    cout << "V";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    printStandardLine(n);
}

int main()
{
    solve();
    return 0;
}