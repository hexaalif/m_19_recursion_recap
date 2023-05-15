#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {

    //     scanf("%d %d %d %d", &s, &a, &b, &c);

    //     printf("%d\n", s - (a + b + c));
    // }
    int i = 1;
    while (i <= n)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);

        printf("%d\n", s - (a + b + c));
        i++;
    }
    return 0;
}