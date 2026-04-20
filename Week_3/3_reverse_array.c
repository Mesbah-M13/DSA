#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int x = 0;
    int y = n - 1;

    while (x < y)
    {
        int tmp = arr[x];
        arr[x] = arr[y];
        arr[y] = tmp;

        x++;
        y--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}