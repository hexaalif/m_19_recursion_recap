#include <stdio.h>

void prnt(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    prnt(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    prnt(n);
    return 0;
}