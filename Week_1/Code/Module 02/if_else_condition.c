#include<stdio.h>

int main(){
    int totalAmount;
    scanf("%d", &totalAmount);
    printf("Current Balance is: %d\n",totalAmount);
    if(totalAmount >= 290 && totalAmount <= 399){
        printf("Eat Biriyani...🤗");
    }
    else if (totalAmount >= 400 )
    {
        printf("2 Plates Biriyani with badam sorbot..🍉");
    }
    else if( totalAmount>=180 && totalAmount <=289){
        printf("Regular Biriyani with borhani 🍚🍚🍚");
    }
    else{
        printf("Egg Biriyani 🐣🐣🐣");
    }
    
    return 0;
}