#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int s = 0;
    for (int i = n; i >= 1; i--)
    {
        s = i * (i - 1);
        sum = s + sum;
    }
    printf("%d", sum);
    return 0;
}