string cross(string a, int num)
{
    string ans = "";
    int c = 0;
    for (char each : a)
    {
        c += ((each - '0') * (num));
        ans += ('0' + c % 10);
        c %= 10;
    }
    while (c > 0)
    {
        ans += (c % 10);
        c /= 10;
    }
    return ans;
}

string add(string a, string b)
{
    int n1 = a.size(), n2 = b.size(), c = 0;
    string ans = "";
    for (int i = 0; (i < max(n1, n2)) || (c > 0); i++)
    {
        if (i < n1)
        {
            c += (a[i] - '0');
        }
        if (i < n2)
        {
            c += (b[i] - '0');
        }
        ans += ('0' + c % 10);
        c /= 10;
    }
    return ans;
}

string Solution::multiply(string a, string b)
{
    int n1 = a.size(), n2 = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans = "", zeros = "0";
    if (n1 == 0)
        return b;
    if (n2 == 0)
        return a;
    ans = cross(b, a[0] - '0');
    for (int i = 1; i < n1; i++)
    {
        ans = add(ans, zeros + cross(b, a[i] - '0'));
        zeros += '0';
    }
    reverse(ans.begin(), ans.end());
    int pos = 0;
    while (ans[pos] == '0')
        pos++;
    return ans.substr(pos, ans.size() - pos);
}
