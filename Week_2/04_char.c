#include<stdio.h>

int main(){

    char a ;
    scanf("%c", &a);
    // printf("%d", a);

    if( a >= 97 && a <= 122 ){
        a -= 32;
        printf("%c", a);
    } else if( a >= 65 && a <=90){
        a +=32;
        printf("%c", a);
    }

    return 0;
}