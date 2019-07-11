#include <bits/stdc++.h>
using namespace std;
int max(int x, int y) { return x > y ? x : y; }

int multiplyWithoutTrick(int num1, int num2, int n)
{
    if (n == 1)
        return num1 * num2;
    else
    {
        int power = pow(10, n / 2);
        int a = num1 / power, b = num1 % power;
        int c = num2 / power, d = num2 % power;
        int e = multiplyWithoutTrick(a, c, n / 2),
            f = multiplyWithoutTrick(a, d, n / 2),
            g = multiplyWithoutTrick(b, c, n / 2);
        int h = multiplyWithoutTrick(b, d, n / 2);
        power = pow(10, n);
        return e * pow(10, n) + (f + g) * pow(10, n / 2) + h;
    }
}

int multiplyWithTrick(int num1, int num2, int n)
{
    if (n == 1)
        return num1 * num2;
    else
    {
        int power = pow(10, n / 2);
        int a = num1 / power, b = num1 % power;
        int c = num2 / power, d = num2 % power;
        int e = multiplyWithTrick(a, c, n / 2),
            f = multiplyWithTrick(a - b, c - d, n / 2),
            h = multiplyWithTrick(b, d, n / 2);
        return e * pow(10, n) + (e + h - f) * pow(10, n / 2) + h;
    }
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << multiplyWithoutTrick(num1, num2,pow(2,max(ceil(log10(num1)),ceil(log10(num2)))))<< endl;
    cout << multiplyWithTrick(num1, num2,pow(2,max(ceil(log10(num1)),ceil(log10(num2))))) << endl;
    return 0;
}
