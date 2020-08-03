int min(int a, int b)
{
    return a > b ? b : a;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
long mod=10000003;

int Solution::paint(int paintersCount, int b, vector<int> &a) {
    int ans = -1, temp = 0, low, high, mid, n = a.size(), tempMax, currSum, nOfStudents;
    if (b > n)
        return -1;
    // sort(a.begin(), a.end());
    low = a[0];
    high = 0;

    for (int i = 0; i < n; i++)
    {
        low = max(low, a[i]);
        high += a[i];
    }
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        tempMax = INT_MIN, currSum = 0;
        nOfStudents = 01;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
            {
                nOfStudents = 0;
                break;
            }
            currSum += a[i];
            if (currSum > mid)
            {
                nOfStudents++;
                currSum = a[i];
            }
            tempMax = max(tempMax, currSum);
        }
        if (nOfStudents <= paintersCount)
        {
            ans = min(ans, tempMax);
            high = tempMax - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ((ans%mod)*(b%mod))%mod;
}
