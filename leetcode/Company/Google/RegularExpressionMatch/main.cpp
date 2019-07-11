#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {

        int n1 = s.size(), n2 = p.size(), i = 0, j = 0;
        char last;
        while ((i < n1) && (j < n2))
        {
            if ((s[i] == p[j]) || (p[j] == '.'))
            {
                i++, j++;
            }
            else
            {
                last = '0';
                if (p[j] == '*')
                    last = p[j - 1];
                if (s[i] == last || last == '.')
                {
                    i++;
                }
                else if ((p[j] == '*') || ((j < n2) && (p[j + 1] == '*')))
                    j++;
                else
                    return false;
            }
        }
        j++;
        while ((j < n2) && (p[j] == '*'))
            j++;
        if ((i < n1) || (j < n2))
            return false;
        return true;
    }
};