#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[10000];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s);
        int small = 0;
        int cap = 0;
        int digit = 0;

        for (int i = 0; i < strlen(s); i++)
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small += 1;
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap += 1;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digit += 1;
            }
        }
        printf("%d %d %d\n", cap, small, digit);
    }

    return 0;
}