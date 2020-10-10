#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }


/*

Best case O(n^ln(n))
average case O(n^ln(n))
worst case O(n^ln(n))

*/

int counter=0;

void mergeStep(int ray[], int start, int end)
{
    int m = (start + end) / 2;
    int one[m - start + 1], two[end - m];
    for (int i = 0; i <= m - start; i++)
    {
        one[i] = ray[start + i];
    }
    for (int i = 0; i < end - m; i++)
    {
        two[i] = ray[m + i + 1];
    }

    int i1 = 0, i2 = 0, i = start;
    while ((i1 <= m - start) && (i2 < end - m))
    {
        /* code */
        if (one[i1] < two[i2])
        {
            ray[i++] = one[i1++];
        }
        else
        {
            ray[i++] = two[i2++];
        }
    }
    while (i1 <= m - start)
    {
        ray[i++] = one[i1++];
    }
    while (i2 < end - m)
    {
        /* code */
        ray[i++] = two[i2++];
    }
    return;
}

void mergeSort(int ray[], int start, int end)
{
    int m = (start + end) / 2;
    if (start + 1 != end)
    {
        mergeSort(ray, start, m);
        mergeSort(ray, m + 1, end);
        mergeStep(ray, start, end);
    }
    if (ray[start] > ray[end])
    {
        swap(ray[start], ray[end]),counter;
    }
    return;
}

int main()
{
    int n; //size of the array
    cin >> n;
    int ray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ray[i];
    }
    mergeSort(ray, 0, n - 1);
        cout<<"counter :"<<counter<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << ray[i] << " ";
    }
    return 0;
}
