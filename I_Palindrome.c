#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int i, count = 0;
    for (i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] == s[strlen(s) - i - 1])
        {
            count++;
        }
    }
    if (count == i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}