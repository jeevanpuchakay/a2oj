#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
void solveCase(ll testCaseNum)
{
    int k, n, m;
    cin >> k >> n >> m;
    int monocarp[n], polycarp[m], possibleSequence[n + m];
    for (int i = 0; i < n; i++)
        cin >> monocarp[i];
    for (int i = 0; i < m; i++)
        cin >> polycarp[i];
    int itrMonocarp = 0, itrPolycarp = 0;
    bool isSequencePossible = true;
    for (int i = 0; i < (n + m); i++)
    {
        if (itrMonocarp == n)
        {
            if (polycarp[itrPolycarp] > k)
            {
                isSequencePossible = false;
                break;
            }
            else if (polycarp[itrPolycarp] == 0)
                possibleSequence[i] = polycarp[itrPolycarp++], k++;
            else
                possibleSequence[i] = polycarp[itrPolycarp++];
        }
        else if (itrPolycarp == m)
        {
            if (monocarp[itrMonocarp] > k)
            {
                isSequencePossible = false;
                break;
            }
            else if (monocarp[itrMonocarp] == 0)
                possibleSequence[i] = monocarp[itrMonocarp++], k++;
            else
                possibleSequence[i] = monocarp[itrMonocarp++];
        }
        else if (monocarp[itrMonocarp] == 0)
        {
            possibleSequence[i] = monocarp[itrMonocarp++];
            k++;
        }
        else if (polycarp[itrPolycarp] == 0)
        {
            possibleSequence[i] = polycarp[itrPolycarp++];
            k++;
        }
        else if (k < min(monocarp[itrMonocarp], polycarp[itrPolycarp]))
        {
            isSequencePossible = false;
            break;
        }
        else
        {
            if (polycarp[itrPolycarp] > monocarp[itrMonocarp])
            {
                possibleSequence[i] = monocarp[itrMonocarp++];
            }
            else
            {
                possibleSequence[i] = polycarp[itrPolycarp++];
            }
        }
    }
    if (isSequencePossible)
    {
        for (int i = 0; i < (n + m); i++)
        {
            cout << possibleSequence[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}