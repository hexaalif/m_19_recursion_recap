#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tiger[n], pathan[n], countT = 0, countP = 0, draw = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &tiger[i], &pathan[i]);
        if (tiger[i] == pathan[i])
        {
            draw++;
        }
        else if (tiger[i] > pathan[i])
        {
            countT++;
        }
        else
        {
            countP++;
        }
    }
    if (countT == countP && draw > 0)
    {
        printf("Draw");
    }
    else if (countT > countP)
    {
        printf("Tiger");
    }
    else
    {
        printf("Pathan");
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d %d\n", tiger[i], pathan[i]);
    // }
    return 0;
}