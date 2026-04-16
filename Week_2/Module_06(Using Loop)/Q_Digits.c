// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int x = 0;

//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &x);
//         if( x == 0){
//             printf("0");
//         }
//         while (x != 0)
//         {
//             printf("%d ", x % 10);
//             x = x / 10;
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
1200


*/

#include<stdio.h>

int main(){
    
    int n = 0;
    scanf("%d", &n);
    int num = 0;

    for(int i = 1; i<= n ; i++){
        scanf("%d", &num);

        if( num == 0){
            printf("0");
        }

        while(num != 0){
            printf("%d ",num % 10);
            num /=  10;
        }
        printf("\n");  
    }

    return 0;
}