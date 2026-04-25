#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int len = strlen(s);

    int fre[128] = {0};
    for (int i = 0; i < len; i++)
    {
        int asc_val = (int)s[i];
        fre[asc_val]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        if(fre[i] > 0)
        printf("%c - %d\n", i, fre[i]);
    }

    return 0;
}