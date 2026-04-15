#include<stdio.h>

int main(){
     
    int n = 0;
    scanf("%d", &n);
    int input = 0;
    int max = 0;

    for(int i = 1; i<= n ; i++){
        scanf("%d", &input);
        if(input > max){
            max = input;
        }
    }
    printf("%d ", max);

    return 0;

}