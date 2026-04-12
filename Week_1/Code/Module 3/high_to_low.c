// #include<stdio.h>

// int main(){

//     for(int i =100 ; i >=1 ; i--){
//         if( i % 2 == 1){
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }



// #include<stdio.h>

// int main(){

//     int A=0;
//     scanf("%d", &A);

//     long long int B=0;
//     scanf("%lld", &B);

//     float C=0.0;
//     scanf("%f", &C);

//     char D='a';
//     scanf(" %c", &D);

//     printf("%d\n",A);
//     printf("%lld\n",B);
//     printf("%f\n",C);
//     printf("%c\n",D);

//     return 0;
// }



#include<stdio.h>

int main(){

    int n=0;
    scanf("%d", &n);

    for(int i = 1 ; i<= n ; i++){
        if(i%5 == 0){
        printf("%d Yes \n", i);
    }else{
        printf("%d No \n", i);
    }
    }
    

    return 0;
}