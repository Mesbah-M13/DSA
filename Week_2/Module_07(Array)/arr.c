// #include<stdio.h>

// int main(){
//    int a[4];

//      for(int i = 0; i<=3 ; i++){
//         scanf("%d\n", &a[i]);
//      }
//      for(int i = 0; i<=3 ; i++){
//         printf("a[%d] = %d \n", i, a[i] );
//      }
//     return 0;
// }


#include<stdio.h>

int main(){
   int x=0;
    int arr[x];
    scanf("%d\n", &x);
    for (int i = 0; i < x; i++)
    {
      scanf("%d", &arr[i]);
    }
    for (int i = x-1; i >= 0; i--)
    {
      printf("a[%d] = %d\n", i , arr[i]  );
    }
    
    return 0;
}


