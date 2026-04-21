#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    // printf("%d", max);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    // int tmp = max;
    // max = min;
    // min = tmp;
    // printf("Min = %d  Max = %d \n", min, max);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            a[i] = max;
        }
        else if (a[i] == max)
        {
            a[i] = min;
        }

        printf("%d ", a[i]);
    }

    return 0;
}