#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
        printf(" ");
        printf("%d ", t[i]);
    }

    return 0;
}