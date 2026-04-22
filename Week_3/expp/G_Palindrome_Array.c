#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    // using for loop but without flag

    // for (int i = 0, j= n-1; i < j; i++, j--)
    // {
    //     if(a[i] != a[j]){
    //         printf("NO");
    //         return 0;
    //     }
    // }
    // printf("YES");

    // using for loop & flag

    int flag = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("YES");

    // using while loop
    // int x = 0, y = n - 1;

    // while ( x < y)
    // {
    //     if( a[x] != a[y]){
    //         printf("NO");
    //         return 0;
    //     }
    //     x++;
    //     y--;
    // }
    // printf("YES");

    return 0;
}