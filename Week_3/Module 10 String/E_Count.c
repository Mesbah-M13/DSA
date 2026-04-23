#include<stdio.h>
#include<string.h>

int main(){
     char S[1000001];
     int count = 0;
     scanf("%s",S);

    for (int i = 0; i < strlen(S); i++)
    {
        count = count + S[i] - '0'; // here calculation happens in ASCII
        // value of 0 in ASCII is 48
    }
    printf("%d",count);
    

    return 0;
}