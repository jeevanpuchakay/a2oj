#include <bits/stdc++.h>
using namespace std;

int main()
{
    int order;
    cin >> order;
    int matrix1[order][order],matrix2[order][order],answer[order][order];
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            int transit = 0;
            for (int p = 0; p < order; p++)
            {
                transit += matrix1[i][p] * matrix2[p][j];
            }
            answer[i][j] = transit;
        }
    }
    return 0;
}
