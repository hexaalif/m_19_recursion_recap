#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flg = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flg = 0;
                }
                continue;
            }
            if (a[i][j] != 0)
            {
                flg = 0;
            }
        }
        // printf("\n");
    }
    if (flg == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}