#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int n1 = num1.size(), n2 = num2.size(), result;
        int multiplicationArray[n1 + n2];
        // memset()
        memset(multiplicationArray, 0, (n1 + n2) * (sizeof(int)));
        for (int i = n2 - 1; i >= 0; i--)
        {
            for (int j = n1 - 1; j >= 0; j--)
            {
                result = (num1[j] - '0') * (num2[i] - '0');
                result += multiplicationArray[i + j + 1];
                multiplicationArray[i + j + 1] = result % 10;
                multiplicationArray[i + j] += result / 10;
            }
        }
        int pos = 0;
        while (multiplicationArray[pos] == 0)
            pos++;
        string ans = "";
        for (int i = pos; i < n1 + n2; i++)
        {
            ans += (multiplicationArray[i] + '0');
        }
        return ans;
    }
};

int main()
{
    return 0;
}