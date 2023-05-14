#include <stdio.h>

int fac(int n)
{
    // base case
    if (n == 0)
        return 1;
    long long ans = fac(n - 1);
    return ans * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long sum = fac(n);
    printf("%lld", sum);

    return 0;
}