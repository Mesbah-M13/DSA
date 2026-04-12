#include<stdio.h>

int main(){
    int date;
    int amount;
    int dept;
    scanf("%d %d", &date, &amount);
    if(date<5){
        printf("Balance Nill...");
    }
    else if(date>=5 || date<=10){
        printf("Total Balance : %d\n", amount);
        if(amount >=25000){
        dept = amount - 10000;
        printf("pay dept %d\n",dept);
        amount = amount - dept;
        }
        if (amount >5000){
            printf("Buy Food\n");
        }
        else{
            printf("Buy Food and Fish\n");
        }
    }
    
    else{
        printf("Will be received after 10th\n");
    }


    return 0;
}