#include<stdio.h>

int main(){

    int N=0;
    scanf("%d",&N);

    if( N > 1000){
        printf("I will buy Punjabi\n");
    
        N -= 1000;
        if(N>= 500){
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
        }

    }else{
        printf("Bad luck!\n");
    }
    return 0;
}


https://www.hackerrank.com/profile/mesbahhim010
@mesbahhim010