#include <stdio.h>
#include <limits.h>

int max(int a[], int n, int i)
{
    if (i == n)
        return INT_MIN;
    // int temp = INT_MIN;
    int temp = max(a, n, i + 1);
    if (a[i] > temp)
    {
        return a[i];
    }
    else
    {
        return temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mx = max(a, n, 0);
    printf("%d", mx);

    // for (int i = 0; i < n; i++)
    // {
    //     // scanf("%d", &a[i]);
    //     if (a[i] > temp)
    //     {
    //         temp = a[i];
    //     }
    // }
    return 0;
}